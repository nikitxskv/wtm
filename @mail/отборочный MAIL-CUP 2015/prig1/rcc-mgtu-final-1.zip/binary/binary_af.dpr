{$apptype console}
uses SysUtils;

var
    x, i, j, k, n, usedCount : longint;
    tx, ans : int64;
    sx : array[1..40] of integer;
    used : array[1..1600] of int64;
    good : boolean;
begin
    read(x);
    n := 0;
    while (x > 0) do begin
        inc(n);
        sx[n] := x mod 2;
        x := x div 2;
    end;

    ans := 0;
    usedCount := 0;
    for i := 1 to n do begin
        for j := i to n do begin
            tx := 0;
            for k := j downto i do begin
                tx := tx * 2 + sx[k];
            end;
            good := true;
            for k := 1 to usedCount do begin
                if (used[k] = tx) then begin
                    good := false;
                    break;
                end;
            end;
            if (good) then begin
                inc(usedCount);
                used[usedCount] := tx;
                ans := ans + tx;
            end;
        end;
    end;
    writeln(ans);
end.