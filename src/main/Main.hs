-- Copyright (c) 2019 Geoffrey Huntley. All rights reserved.
-- SPDX-License-Identifier: AGPL-3.0

module Main where

import Demo (hello, world)

main :: IO ()
main = putStrLn $ hello ++ " " ++ world

