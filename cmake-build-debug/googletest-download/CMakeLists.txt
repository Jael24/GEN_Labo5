# Distributed under the OSI-approved MIT License.  See accompanying
# file LICENSE or https://github.com/Crascit/DownloadProject for details.

cmake_minimum_required(VERSION 2.8.2)

project(googletest-download NONE)

include(ExternalProject)
ExternalProject_Add(googletest-download
                    GIT_REPOSITORY;https://github.com/google/googletest.git;GIT_TAG;master;UPDATE_DISCONNECTED 1
                    SOURCE_DIR          "C:/Users/jaeld/Desktop/Cours/GEN/Laboratoires/GEN_Labo5/cmake-build-debug/googletest-src"
                    BINARY_DIR          "C:/Users/jaeld/Desktop/Cours/GEN/Laboratoires/GEN_Labo5/cmake-build-debug/googletest-build"
                    CONFIGURE_COMMAND   ""
                    BUILD_COMMAND       ""
                    INSTALL_COMMAND     ""
                    TEST_COMMAND        ""
)
