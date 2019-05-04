module Demo (hello, world) where

import Control.Lens

tuple = ("hello","world")

hello = tuple^._1
world = tuple^._2