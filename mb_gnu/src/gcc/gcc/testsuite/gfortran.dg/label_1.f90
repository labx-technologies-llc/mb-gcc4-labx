! { dg-do compile }
! Test the fix for PR 25106 and 25055.

program a
0056780 continue    ! { dg-error "Too many digits" }
0 continue          ! { dg-error "Statement label at" }
  stop 001234       ! { dg-error "Too many digits" }
end program a


