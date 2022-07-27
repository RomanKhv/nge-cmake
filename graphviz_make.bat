mkdir ./graphviz
cd graphviz

cmake -S .. -B ../build --graphviz=nge.dot

"c:\Program Files\Graphviz\bin\dot" -Tsvg nge.dot -o nge.svg

explorer.exe nge.svg