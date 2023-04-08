# TestGithubActions
Test with github actions and a yocto-container

## yocto container
1. build with meta-virtualization and for qemuarm64
2. docker import must be done in a qemuarm64 image. Otherwise the docker-image architecture is set to host-architecture(for example amd64)

## github actions
1. uses
    1. docker/setup-qemu-action@v1: for qemu emulation in github actions to start the yocto container with platform linux/arm64
    2. actions/checkout@v3: for checkout the repo
    3. addnab/docker-run-action@v3: run the yocto container with platform linux/arm64
        1. the github token for login into github packages to pull the docker container inside github actions must be set in the repo settings (secrets)

