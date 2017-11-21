#!/bin/bash
set -x
git clone https://chromium.googlesource.com/chromium/tools/depot_tools.git ${HOME}/depot_tools
export PATH=${HOME}/depot_tools:${PATH}
mkdir ~/chromium && cd ~/chromium
fetch --nohooks chromium
cd src
travis_wait 60 gclient runhooks
gn gen out/Default
travis_wait 120 ninja -C out/Default chrome
set +x
