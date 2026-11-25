#!/bin/sh
# SPDX-License-Identifier: Apache-2.0
set -eu
umask 077
ulimit -c 0

experiment_dir=$(CDPATH= cd -- "$(dirname -- "$0")" && pwd)
state_dir=$(mktemp -d "${TMPDIR:-/tmp}/sqisign-gmp-peak.XXXXXXXX")

nohup sh -c '
    runner=$1
    state_dir=$2
    shift 2
    if python3 -u "$runner" --scratch "$state_dir" "$@"; then
        rm -f -- "$state_dir/run.log"
        rmdir -- "$state_dir"
    else
        exit 1
    fi
' sh "$experiment_dir/run_parallel.py" "$state_dir" "$@" >"$state_dir/run.log" 2>&1 </dev/null &

printf 'Supervisor PID %s\nTemporary log %s/run.log\n' "$!" "$state_dir"
