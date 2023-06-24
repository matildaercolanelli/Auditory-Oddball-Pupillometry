k=0;
V=[];
i=1;
odd=0;

while i<=200
    
    if k<11 && i<=200 && odd<11
        V(i)=0;
        k=k+1;
        i=i+1;
    
    elseif k==11 && i<=200 && odd<10
      x=randi(10) 
      for i=i:i+x-1
      if i<=200-x
      V(i)=0;
      i=i+1;
      else if i>200-x
              while i<=200
                  V(i)=0;
                  i=i+1;
              end
      end
      end
      end
      k=0;
      if i<200
      V(i)=1;
      i=i+1;
      odd=odd+1;
      end
    
    elseif k==11 && i<=200 && odd==10
          while i<=200
              V(i)=0;
              i=i+1;
          end
     end
end


disp(V);
pause(1);

fprintf('V= \n')

for i=1:199
    fprintf('%d', V(i));
    fprintf(', ');
end

for i=200
     fprintf('%d', V(i));
end