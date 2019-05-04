module Main where

import Demo (hello, world)

main :: IO ()
main = putStrLn $ hello ++ " " ++ world