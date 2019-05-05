-- Copyright (c) 2019 Geoffrey Huntley. All rights reserved.
-- SPDX-License-Identifier: AGPL-3.0

module Demo (hello, world) where

import Control.Lens

tuple = ("hello","world")

hello = tuple^._1
world = tuple^._2

