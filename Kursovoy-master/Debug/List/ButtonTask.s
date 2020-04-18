///////////////////////////////////////////////////////////////////////////////
//
// IAR ANSI C/C++ Compiler V8.40.2.214/W32 for ARM        18/Apr/2020  11:41:14
// Copyright 1999-2019 IAR Systems AB.
//
//    Cpu mode     =  
//    Endian       =  little
//    Source file  =
//        D:\POIP\Git_hub\Kurs\Kursovoy-master\Application\ButtonTask.cpp
//    Command line =
//        -f C:\Users\User\AppData\Local\Temp\EW38FC.tmp
//        (D:\POIP\Git_hub\Kurs\Kursovoy-master\Application\ButtonTask.cpp -lC
//        D:\POIP\Git_hub\Kurs\Kursovoy-master\Debug\List -lA
//        D:\POIP\Git_hub\Kurs\Kursovoy-master\Debug\List -o
//        D:\POIP\Git_hub\Kurs\Kursovoy-master\Debug\Obj --no_cse --no_unroll
//        --no_inline --no_code_motion --no_tbaa --no_clustering
//        --no_scheduling --debug --endian=little --cpu=Cortex-M4 -e
//        --fpu=VFPv4_sp --dlib_config
//        D:\Kolody\iarn\arm\inc\c\DLib_Config_Normal.h -I
//        D:\POIP\Git_hub\Kurs\Kursovoy-master\Rtos\ -I
//        D:\POIP\Git_hub\Kurs\Kursovoy-master\Rtos\wrapper\ -I
//        D:\POIP\Git_hub\Kurs\Kursovoy-master\Rtos\wrapper\FreeRtos\ -I
//        D:\POIP\Git_hub\Kurs\Kursovoy-master\Rtos\FreeRtos\ -I
//        D:\POIP\Git_hub\Kurs\Kursovoy-master\Rtos\FreeRtos\include\ -I
//        D:\POIP\Git_hub\Kurs\Kursovoy-master\Rtos\FreeRtos\portable\ -I
//        D:\POIP\Git_hub\Kurs\Kursovoy-master\Rtos\FreeRtos\portable\Common\
//        -I D:\POIP\Git_hub\Kurs\Kursovoy-master\Rtos\FreeRtos\portable\IAR\
//        -I
//        D:\POIP\Git_hub\Kurs\Kursovoy-master\Rtos\FreeRtos\portable\IAR\ARM_CM4F\
//        -I
//        D:\POIP\Git_hub\Kurs\Kursovoy-master\Rtos\FreeRtos\portable\MemMang\
//        -I D:\POIP\Git_hub\Kurs\Kursovoy-master\MyTasks\ -I
//        D:\POIP\Git_hub\Kurs\Kursovoy-master\Common\ -I
//        D:\POIP\Git_hub\Kurs\Kursovoy-master\CMSIS\ -I
//        D:\POIP\Git_hub\Kurs\Kursovoy-master\Application\ -I
//        D:\POIP\Git_hub\Kurs\Kursovoy-master\Application\Diagnostic\ -I
//        D:\POIP\Git_hub\Kurs\Kursovoy-master\AHardware\ -I
//        D:\POIP\Git_hub\Kurs\Kursovoy-master\AHardware\GpioPort\ -I
//        D:\POIP\Git_hub\Kurs\Kursovoy-master\AHardware\IrqController\ -I
//        D:\POIP\Git_hub\Kurs\Kursovoy-master\..\CortexLib\AbstractHardware\Pin\
//        -I
//        D:\POIP\Git_hub\Kurs\Kursovoy-master\..\CortexLib\AbstractHardware\Registers\STM32F411\FieldValues\
//        -I
//        D:\POIP\Git_hub\Kurs\Kursovoy-master\..\CortexLib\AbstractHardware\Registers\STM32F411\
//        -I
//        D:\POIP\Git_hub\Kurs\Kursovoy-master\..\CortexLib\AbstractHardware\Registers\
//        -I
//        D:\POIP\Git_hub\Kurs\Kursovoy-master\..\CortexLib\AbstractHardware\Port\
//        -I
//        D:\POIP\Git_hub\Kurs\Kursovoy-master\..\CortexLib\AbstractHardware\Atomic\
//        -I D:\POIP\Git_hub\Kurs\Kursovoy-master\..\CortexLib\Common\ -I
//        D:\POIP\Git_hub\Kurs\Kursovoy-master\..\CortexLib\Common\Singleton\
//        -I
//        D:\POIP\Git_hub\Kurs\Kursovoy-master\..\CortexLib\AbstractHardware\Spi\
//        -I D:\POIP\Git_hub\Kurs\Kursovoy-master\AHardware\ -Ol --c++
//        --no_exceptions --no_rtti)
//    Locale       =  C
//    List file    =
//        D:\POIP\Git_hub\Kurs\Kursovoy-master\Debug\List\ButtonTask.s
//
///////////////////////////////////////////////////////////////////////////////

        RTMODEL "__CPP_Exceptions", "Disabled"
        RTMODEL "__CPP_Language", "C++14"
        RTMODEL "__SystemLibrary", "DLib"
        RTMODEL "__dlib_file_descriptor", "0"
        RTMODEL "__dlib_full_locale_support", "0"
        RTMODEL "__dlib_version", "6"
        AAPCS BASE,INTERWORK,VFP
        PRESERVE8
        REQUIRE8

        #define SHT_PROGBITS 0x1

        EXTERN _ZTVN10__cxxabiv117__class_type_infoE
        EXTERN _ZTVN10__cxxabiv120__si_class_type_infoE
        EXTERN __aeabi_ldivmod
        EXTERN vEventGroupSetBitsCallback
        EXTERN vTaskDelay
        EXTERN xTimerPendFunctionCallFromISR

        PUBLIC UserButtonPin
        PUBLIC _ZN10ButtonTask7ExecuteEv
        PUBLIC _ZN10ButtonTaskC1ERN9OsWrapper5EventE
        PUBLIC _ZN10ButtonTaskC2ERN9OsWrapper5EventE
        PUBLIC _ZN12RegisterBaseILj1073874944ELj32E13ReadWriteModeE3GetIS0_vEEjv
        PUBLIC _ZN12RegisterBaseILj1073874944ELj32E13ReadWriteModeE5WriteIS0_vEEvj
        PUBLIC _ZN12RegisterBaseILj1073874960ELj32E8ReadModeE3GetIS0_vEEjv
        PUBLIC _ZN12RegisterBaseILj1073874964ELj32E13ReadWriteModeE3GetIS0_vEEjv
        PUBLIC _ZN12RegisterBaseILj1073874964ELj32E13ReadWriteModeE5WriteIS0_vEEvj
        PUBLIC _ZN9OsWrapper11RtosWrapper12wSignalEventERKPvj
        PUBLIC _ZN9OsWrapper11RtosWrapper6wSleepEj
        PUBLIC _ZN9OsWrapper5Event6SignalEv
        PUBLIC _ZN9OsWrapper6ThreadILj128EEC1Ev
        PUBLIC _ZN9OsWrapper6ThreadILj128EEC2Ev
        PUBLIC _ZN9OsWrapper7IThread5SleepENSt6chrono8durationIxSt5ratioILx1ELx1000EEEE
        PUBLIC _ZN9OsWrapper7IThreadC1Ev
        PUBLIC _ZN9OsWrapper7IThreadC2Ev
        PUBLIC _ZNK6ButtonIL_Z13UserButtonPinEE8IsPushedEv
        PUBLIC _ZNK8GpioPortI5GPIOCLj13EE12SetAlternateEv
        PUBLIC _ZNK8GpioPortI5GPIOCLj13EE3SetEv
        PUBLIC _ZNK8GpioPortI5GPIOCLj13EE5IsSetEv
        PUBLIC _ZNK8GpioPortI5GPIOCLj13EE5ResetEv
        PUBLIC _ZNK8GpioPortI5GPIOCLj13EE8SetInputEv
        PUBLIC _ZNK8GpioPortI5GPIOCLj13EE9SetOutputEv
        PUBLIC _ZNKSt6chrono8durationIjSt5ratioILx10ELx1000EEE5countEv
        PUBLIC _ZNKSt6chrono8durationIxSt5ratioILx1ELx1000EEE5countEv
        PUBLIC _ZNSt6chrono12steady_clock9is_steadyE
        PUBLIC _ZNSt6chrono12system_clock12is_monotonicE
        PUBLIC _ZNSt6chrono12system_clock9is_steadyE
        PUBLIC _ZNSt6chrono13duration_castINS_8durationIjSt5ratioILx10ELx1000EEEExS2_ILx1ELx1000EEEENSt9enable_ifIXsr3std6chrono12_Is_durationIT_EE5valueES7_E4typeERKNS1_IT0_T1_EE
        PUBLIC _ZNSt6chrono8durationIjSt5ratioILx10ELx1000EEEC1IjvEERKT_
        PUBLIC _ZTI10ButtonTask
        PUBLIC _ZTI5IGpio
        PUBLIC _ZTI8GpioPortI5GPIOCLj13EE
        PUBLIC _ZTIN9OsWrapper6ThreadILj128EEE
        PUBLIC _ZTIN9OsWrapper7IThreadE
        PUBLIC _ZTISt10ctype_base
        PUBLIC _ZTS10ButtonTask
        PUBLIC _ZTS5IGpio
        PUBLIC _ZTS8GpioPortI5GPIOCLj13EE
        PUBLIC _ZTSN9OsWrapper6ThreadILj128EEE
        PUBLIC _ZTSN9OsWrapper7IThreadE
        PUBLIC _ZTSSt10ctype_base
        PUBLIC _ZTV10ButtonTask
        PUBLIC _ZTV8GpioPortI5GPIOCLj13EE
        
          CFI Names cfiNames0
          CFI StackFrame CFA R13 DATA
          CFI Resource R0:32, R1:32, R2:32, R3:32, R4:32, R5:32, R6:32, R7:32
          CFI Resource R8:32, R9:32, R10:32, R11:32, R12:32, R13:32, R14:32
          CFI Resource D0:64, D1:64, D2:64, D3:64, D4:64, D5:64, D6:64, D7:64
          CFI Resource D8:64, D9:64, D10:64, D11:64, D12:64, D13:64, D14:64
          CFI Resource D15:64
          CFI EndNames cfiNames0
        
          CFI Common cfiCommon0 Using cfiNames0
          CFI CodeAlign 2
          CFI DataAlign 4
          CFI ReturnAddress R14 CODE
          CFI CFA R13+0
          CFI R0 Undefined
          CFI R1 Undefined
          CFI R2 Undefined
          CFI R3 Undefined
          CFI R4 SameValue
          CFI R5 SameValue
          CFI R6 SameValue
          CFI R7 SameValue
          CFI R8 SameValue
          CFI R9 SameValue
          CFI R10 SameValue
          CFI R11 SameValue
          CFI R12 Undefined
          CFI R14 SameValue
          CFI D0 Undefined
          CFI D1 Undefined
          CFI D2 Undefined
          CFI D3 Undefined
          CFI D4 Undefined
          CFI D5 Undefined
          CFI D6 Undefined
          CFI D7 Undefined
          CFI D8 SameValue
          CFI D9 SameValue
          CFI D10 SameValue
          CFI D11 SameValue
          CFI D12 SameValue
          CFI D13 SameValue
          CFI D14 SameValue
          CFI D15 SameValue
          CFI EndCommon cfiCommon0
        
// D:\POIP\Git_hub\Kurs\Kursovoy-master\Application\ButtonTask.cpp
//    1 #include "ButtonTask.hpp"

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZNSt6chrono13duration_castINS_8durationIjSt5ratioILx10ELx1000EEEExS2_ILx1ELx1000EEEENSt9enable_ifIXsr3std6chrono12_Is_durationIT_EE5valueES7_E4typeERKNS1_IT0_T1_EE
          CFI Block cfiBlock0 Using cfiCommon0
          CFI Function _ZNSt6chrono13duration_castINS_8durationIjSt5ratioILx10ELx1000EEEExS2_ILx1ELx1000EEEENSt9enable_ifIXsr3std6chrono12_Is_durationIT_EE5valueES7_E4typeERKNS1_IT0_T1_EE
        THUMB
// __interwork __vfp OsWrapper::TicksPerSecond std::chrono::duration_cast<OsWrapper::TicksPerSecond, __int64_t, std::milli>(std::chrono::duration<__int64_t, std::milli> const &)
_ZNSt6chrono13duration_castINS_8durationIjSt5ratioILx10ELx1000EEEExS2_ILx1ELx1000EEEENSt9enable_ifIXsr3std6chrono12_Is_durationIT_EE5valueES7_E4typeERKNS1_IT0_T1_EE:
        PUSH     {R5-R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+16
          CFI FunCall _ZNKSt6chrono8durationIxSt5ratioILx1ELx1000EEE5countEv
        BL       _ZNKSt6chrono8durationIxSt5ratioILx1ELx1000EEE5countEv
        MOVS     R2,#+10
        MOVS     R3,#+0
          CFI FunCall __aeabi_ldivmod
        BL       __aeabi_ldivmod
        STR      R0,[SP, #+4]
        ADD      R1,SP,#+4
        MOV      R0,SP
          CFI FunCall _ZNSt6chrono8durationIjSt5ratioILx10ELx1000EEEC1IjvEERKT_
        BL       _ZNSt6chrono8durationIjSt5ratioILx10ELx1000EEEC1IjvEERKT_
        LDR      R0,[SP, #+0]
        POP      {R1-R3,PC}       ;; return
          CFI EndBlock cfiBlock0

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZNSt6chrono8durationIjSt5ratioILx10ELx1000EEEC1IjvEERKT_
          CFI Block cfiBlock1 Using cfiCommon0
          CFI Function _ZNSt6chrono8durationIjSt5ratioILx10ELx1000EEEC1IjvEERKT_
          CFI NoCalls
        THUMB
// __code __interwork __vfp std::chrono::duration<uint32_t, std::ratio<10LL, 1000LL>>::duration<uint32_t, void>(uint32_t const &)
_ZNSt6chrono8durationIjSt5ratioILx10ELx1000EEEC1IjvEERKT_:
        LDR      R1,[R1, #+0]
        STR      R1,[R0, #+0]
        BX       LR               ;; return
          CFI EndBlock cfiBlock1

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZNKSt6chrono8durationIxSt5ratioILx1ELx1000EEE5countEv
          CFI Block cfiBlock2 Using cfiCommon0
          CFI Function _ZNKSt6chrono8durationIxSt5ratioILx1ELx1000EEE5countEv
          CFI NoCalls
        THUMB
// __interwork __vfp __int64_t std::chrono::duration<__int64_t, std::milli>::count() const
_ZNKSt6chrono8durationIxSt5ratioILx1ELx1000EEE5countEv:
        LDRD     R0,R1,[R0, #+0]
        BX       LR               ;; return
          CFI EndBlock cfiBlock2

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZNKSt6chrono8durationIjSt5ratioILx10ELx1000EEE5countEv
          CFI Block cfiBlock3 Using cfiCommon0
          CFI Function _ZNKSt6chrono8durationIjSt5ratioILx10ELx1000EEE5countEv
          CFI NoCalls
        THUMB
// __interwork __vfp uint32_t std::chrono::duration<uint32_t, std::ratio<10LL, 1000LL>>::count() const
_ZNKSt6chrono8durationIjSt5ratioILx10ELx1000EEE5countEv:
        LDR      R0,[R0, #+0]
        BX       LR               ;; return
          CFI EndBlock cfiBlock3

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTIN9OsWrapper7IThreadE
        DATA
// __absolute __class_type_info const <Typeinfo for OsWrapper::IThread>
_ZTIN9OsWrapper7IThreadE:
        DATA32
        DC32 _ZTVN10__cxxabiv117__class_type_infoE + 0x8
        DC32 _ZTSN9OsWrapper7IThreadE

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTI8GpioPortI5GPIOCLj13EE
        DATA
// __absolute __si_class_type_info const <Typeinfo for GpioPort<GPIOC, (unsigned int)13>>
_ZTI8GpioPortI5GPIOCLj13EE:
        DATA32
        DC32 _ZTVN10__cxxabiv120__si_class_type_infoE + 0x8
        DC32 _ZTS8GpioPortI5GPIOCLj13EE, _ZTI5IGpio

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTV8GpioPortI5GPIOCLj13EE
        DATA
// __absolute void (*const GpioPort<GPIOC, 13U>::__vtbl[8])()
_ZTV8GpioPortI5GPIOCLj13EE:
        DATA32
        DC32 0x0, _ZTI8GpioPortI5GPIOCLj13EE
        DC32 _ZNK8GpioPortI5GPIOCLj13EE12SetAlternateEv
        DC32 _ZNK8GpioPortI5GPIOCLj13EE8SetInputEv
        DC32 _ZNK8GpioPortI5GPIOCLj13EE9SetOutputEv
        DC32 _ZNK8GpioPortI5GPIOCLj13EE5IsSetEv
        DC32 _ZNK8GpioPortI5GPIOCLj13EE3SetEv
        DC32 _ZNK8GpioPortI5GPIOCLj13EE5ResetEv

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTV10ButtonTask
        DATA
// __absolute void (*const ButtonTask::__vtbl[3])()
_ZTV10ButtonTask:
        DATA32
        DC32 0x0, _ZTI10ButtonTask, _ZN10ButtonTask7ExecuteEv

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTI5IGpio
        DATA
// __absolute __class_type_info const <Typeinfo for IGpio>
_ZTI5IGpio:
        DATA32
        DC32 _ZTVN10__cxxabiv117__class_type_infoE + 0x8, _ZTS5IGpio

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTI10ButtonTask
        DATA
// __absolute __si_class_type_info const <Typeinfo for ButtonTask>
_ZTI10ButtonTask:
        DATA32
        DC32 _ZTVN10__cxxabiv120__si_class_type_infoE + 0x8, _ZTS10ButtonTask
        DC32 _ZTIN9OsWrapper6ThreadILj128EEE

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTIN9OsWrapper6ThreadILj128EEE
        DATA
// __absolute __si_class_type_info const <Typeinfo for OsWrapper::Thread<(unsigned int)128>>
_ZTIN9OsWrapper6ThreadILj128EEE:
        DATA32
        DC32 _ZTVN10__cxxabiv120__si_class_type_infoE + 0x8
        DC32 _ZTSN9OsWrapper6ThreadILj128EEE, _ZTIN9OsWrapper7IThreadE

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTS5IGpio
        DATA
// __absolute char const <Typeinfo name for IGpio>[7]
_ZTS5IGpio:
        DATA8
        DC8 "5IGpio"
        DC8 0

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTS8GpioPortI5GPIOCLj13EE
        DATA
// __absolute char const <Typeinfo name for GpioPort<GPIOC, (unsigned int)13>>[23]
_ZTS8GpioPortI5GPIOCLj13EE:
        DATA8
        DC8 "8GpioPortI5GPIOCLj13EE"
        DC8 0

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTSN9OsWrapper7IThreadE
        DATA
// __absolute char const <Typeinfo name for OsWrapper::IThread>[21]
_ZTSN9OsWrapper7IThreadE:
        DATA8
        DC8 "N9OsWrapper7IThreadE"
        DATA
        DC8 0, 0, 0

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTSN9OsWrapper6ThreadILj128EEE
        DATA
// __absolute char const <Typeinfo name for OsWrapper::Thread<(unsigned int)128>>[28]
_ZTSN9OsWrapper6ThreadILj128EEE:
        DATA8
        DC8 "N9OsWrapper6ThreadILj128EEE"

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTS10ButtonTask
        DATA
// __absolute char const <Typeinfo name for ButtonTask>[13]
_ZTS10ButtonTask:
        DATA8
        DC8 "10ButtonTask"
        DATA
        DC8 0, 0, 0

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTISt10ctype_base
        DATA
// __absolute __class_type_info const <Typeinfo for std::ctype_base>
_ZTISt10ctype_base:
        DATA32
        DC32 _ZTVN10__cxxabiv117__class_type_infoE + 0x8, _ZTSSt10ctype_base

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTSSt10ctype_base
        DATA
// __absolute char const <Typeinfo name for std::ctype_base>[15]
_ZTSSt10ctype_base:
        DATA8
        DC8 "St10ctype_base"
        DC8 0

        SECTION `.rodata`:CONST:REORDER:NOROOT(3)
        DATA
?_0:
        DATA64
        DC64 300

        SECTION `.rodata`:CONST:REORDER:NOROOT(0)
        SECTION_GROUP _ZNSt6chrono12system_clock9is_steadyE
        DATA
// __absolute bool const std::chrono::system_clock::is_steady
_ZNSt6chrono12system_clock9is_steadyE:
        DATA8
        DC8 0

        SECTION `.rodata`:CONST:REORDER:NOROOT(0)
        SECTION_GROUP _ZNSt6chrono12system_clock12is_monotonicE
        DATA
// __absolute bool const std::chrono::system_clock::is_monotonic
_ZNSt6chrono12system_clock12is_monotonicE:
        DATA8
        DC8 0

        SECTION `.rodata`:CONST:REORDER:NOROOT(0)
        SECTION_GROUP _ZNSt6chrono12steady_clock9is_steadyE
        DATA
// __absolute bool const std::chrono::steady_clock::is_steady
_ZNSt6chrono12steady_clock9is_steadyE:
        DATA8
        DC8 1

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN9OsWrapper11RtosWrapper6wSleepEj
          CFI Block cfiBlock4 Using cfiCommon0
          CFI Function _ZN9OsWrapper11RtosWrapper6wSleepEj
        THUMB
// __interwork __vfp void OsWrapper::RtosWrapper::wSleep(uint32_t)
_ZN9OsWrapper11RtosWrapper6wSleepEj:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
          CFI FunCall vTaskDelay
        BL       vTaskDelay
        POP      {R0,PC}          ;; return
          CFI EndBlock cfiBlock4

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN9OsWrapper11RtosWrapper12wSignalEventERKPvj
          CFI Block cfiBlock5 Using cfiCommon0
          CFI Function _ZN9OsWrapper11RtosWrapper12wSignalEventERKPvj
        THUMB
// __interwork __vfp void OsWrapper::RtosWrapper::wSignalEvent(void * const &, uint32_t)
_ZN9OsWrapper11RtosWrapper12wSignalEventERKPvj:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
        MOVS     R2,R1
        MOVS     R1,#+0
        STR      R1,[SP, #+0]
        MOV      R3,SP
        LDR      R1,[R0, #+0]
        LDR.N    R0,??wSignalEvent_0
          CFI FunCall xTimerPendFunctionCallFromISR
        BL       xTimerPendFunctionCallFromISR
        CMP      R0,#+0
        BEQ.N    ??wSignalEvent_1
        LDR      R0,[SP, #+0]
        CMP      R0,#+0
        BEQ.N    ??wSignalEvent_1
        MOVS     R0,#+268435456
        LDR.N    R1,??wSignalEvent_0+0x4  ;; 0xe000ed04
        STR      R0,[R1, #+0]
        DSB      SY
        ISB      SY
??wSignalEvent_1:
        POP      {R0,PC}          ;; return
        Nop      
        DATA
??wSignalEvent_0:
        DATA32
        DC32     vEventGroupSetBitsCallback
        DC32     0xe000ed04
          CFI EndBlock cfiBlock5

        SECTION `.data`:DATA:REORDER:NOROOT(2)
        SECTION_GROUP UserButtonPin
        DATA
// __absolute GpioPort<GPIOC, 13U> UserButtonPin
UserButtonPin:
        DATA32
        DC32 _ZTV8GpioPortI5GPIOCLj13EE + 0x8

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock6 Using cfiCommon0
          CFI Function _ZN10ButtonTaskC2ERN9OsWrapper5EventE
        THUMB
// __code __interwork __vfp ButtonTask::subobject ButtonTask(OsWrapper::Event &)
_ZN10ButtonTaskC2ERN9OsWrapper5EventE:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
          CFI FunCall _ZN10ButtonTaskC1ERN9OsWrapper5EventE
        BL       _ZN10ButtonTaskC1ERN9OsWrapper5EventE
        POP      {R1,PC}          ;; return
          CFI EndBlock cfiBlock6
//    2 

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock7 Using cfiCommon0
          CFI Function _ZN10ButtonTask7ExecuteEv
        THUMB
//    3 void ButtonTask::Execute()
//    4 {
_ZN10ButtonTask7ExecuteEv:
        PUSH     {R4,LR}
          CFI R14 Frame(CFA, -4)
          CFI R4 Frame(CFA, -8)
          CFI CFA R13+8
        MOVS     R4,R0
//    5   for(;;)
//    6   {
//    7     if (userButton.IsPushed())
??Execute_0:
        ADDS     R0,R4,#+604
          CFI FunCall _ZNK6ButtonIL_Z13UserButtonPinEE8IsPushedEv
        BL       _ZNK6ButtonIL_Z13UserButtonPinEE8IsPushedEv
        CMP      R0,#+0
        BEQ.N    ??Execute_1
//    8     {
//    9       myEvent.Signal();
        LDR      R0,[R4, #+608]
          CFI FunCall _ZN9OsWrapper5Event6SignalEv
        BL       _ZN9OsWrapper5Event6SignalEv
??Execute_1:
        LDR.N    R2,??DataTable2
        LDRD     R0,R1,[R2, #+0]
//   10     }
//   11     Sleep(300ms);
          CFI FunCall _ZN9OsWrapper7IThread5SleepENSt6chrono8durationIxSt5ratioILx1ELx1000EEEE
        BL       _ZN9OsWrapper7IThread5SleepENSt6chrono8durationIxSt5ratioILx1ELx1000EEEE
        B.N      ??Execute_0
//   12   }
//   13 }
          CFI EndBlock cfiBlock7
//   14 

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock8 Using cfiCommon0
          CFI Function _ZN10ButtonTaskC1ERN9OsWrapper5EventE
        THUMB
//   15 ButtonTask::ButtonTask(OsWrapper::Event& event): myEvent(event)
//   16 {
_ZN10ButtonTaskC1ERN9OsWrapper5EventE:
        PUSH     {R3-R5,LR}
          CFI R14 Frame(CFA, -4)
          CFI R5 Frame(CFA, -8)
          CFI R4 Frame(CFA, -12)
          CFI CFA R13+16
        MOVS     R4,R0
        MOVS     R5,R1
        MOVS     R0,R4
          CFI FunCall _ZN9OsWrapper6ThreadILj128EEC2Ev
        BL       _ZN9OsWrapper6ThreadILj128EEC2Ev
        LDR.N    R0,??DataTable2_1
        STR      R0,[R4, #+0]
        STR      R5,[R4, #+608]
//   17 }
        MOVS     R0,R4
        POP      {R1,R4,R5,PC}    ;; return
          CFI EndBlock cfiBlock8

        SECTION `.text`:CODE:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        DATA
??DataTable2:
        DATA32
        DC32     ?_0

        SECTION `.text`:CODE:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        DATA
??DataTable2_1:
        DATA32
        DC32     _ZTV10ButtonTask+0x8

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN9OsWrapper7IThreadC2Ev
          CFI Block cfiBlock9 Using cfiCommon0
          CFI Function _ZN9OsWrapper7IThreadC2Ev
        THUMB
// __code __interwork __vfp OsWrapper::IThread::subobject IThread()
_ZN9OsWrapper7IThreadC2Ev:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
          CFI FunCall _ZN9OsWrapper7IThreadC1Ev
        BL       _ZN9OsWrapper7IThreadC1Ev
        POP      {R1,PC}          ;; return
          CFI EndBlock cfiBlock9

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN9OsWrapper7IThreadC1Ev
          CFI Block cfiBlock10 Using cfiCommon0
          CFI Function _ZN9OsWrapper7IThreadC1Ev
          CFI NoCalls
        THUMB
// __code __interwork __vfp OsWrapper::IThread::IThread()
_ZN9OsWrapper7IThreadC1Ev:
        MOVS     R1,#+0
        STR      R1,[R0, #+84]
        MOVS     R1,#+0
        STR      R1,[R0, #+88]
        BX       LR               ;; return
          CFI EndBlock cfiBlock10

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN9OsWrapper7IThread5SleepENSt6chrono8durationIxSt5ratioILx1ELx1000EEEE
          CFI Block cfiBlock11 Using cfiCommon0
          CFI Function _ZN9OsWrapper7IThread5SleepENSt6chrono8durationIxSt5ratioILx1ELx1000EEEE
        THUMB
// __interwork __vfp void OsWrapper::IThread::Sleep(std::chrono::milliseconds)
_ZN9OsWrapper7IThread5SleepENSt6chrono8durationIxSt5ratioILx1ELx1000EEEE:
        PUSH     {R0,R1,R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+16
        SUB      SP,SP,#+8
          CFI CFA R13+24
        ADD      R0,SP,#+8
          CFI FunCall _ZNSt6chrono13duration_castINS_8durationIjSt5ratioILx10ELx1000EEEExS2_ILx1ELx1000EEEENSt9enable_ifIXsr3std6chrono12_Is_durationIT_EE5valueES7_E4typeERKNS1_IT0_T1_EE
        BL       _ZNSt6chrono13duration_castINS_8durationIjSt5ratioILx10ELx1000EEEExS2_ILx1ELx1000EEEENSt9enable_ifIXsr3std6chrono12_Is_durationIT_EE5valueES7_E4typeERKNS1_IT0_T1_EE
        STR      R0,[SP, #+0]
        MOV      R0,SP
          CFI FunCall _ZNKSt6chrono8durationIjSt5ratioILx10ELx1000EEE5countEv
        BL       _ZNKSt6chrono8durationIjSt5ratioILx10ELx1000EEE5countEv
          CFI FunCall _ZN9OsWrapper11RtosWrapper6wSleepEj
        BL       _ZN9OsWrapper11RtosWrapper6wSleepEj
        ADD      SP,SP,#+20
          CFI CFA R13+4
        POP      {PC}             ;; return
          CFI EndBlock cfiBlock11

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN9OsWrapper6ThreadILj128EEC2Ev
          CFI Block cfiBlock12 Using cfiCommon0
          CFI Function _ZN9OsWrapper6ThreadILj128EEC2Ev
        THUMB
// __code __interwork __vfp OsWrapper::Thread<128U>::subobject Thread()
_ZN9OsWrapper6ThreadILj128EEC2Ev:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
          CFI FunCall _ZN9OsWrapper6ThreadILj128EEC1Ev
        BL       _ZN9OsWrapper6ThreadILj128EEC1Ev
        POP      {R1,PC}          ;; return
          CFI EndBlock cfiBlock12

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN9OsWrapper6ThreadILj128EEC1Ev
          CFI Block cfiBlock13 Using cfiCommon0
          CFI Function _ZN9OsWrapper6ThreadILj128EEC1Ev
        THUMB
// __code __interwork __vfp OsWrapper::Thread<128U>::Thread()
_ZN9OsWrapper6ThreadILj128EEC1Ev:
        PUSH     {R4,LR}
          CFI R14 Frame(CFA, -4)
          CFI R4 Frame(CFA, -8)
          CFI CFA R13+8
        MOVS     R4,R0
        MOVS     R0,R4
          CFI FunCall _ZN9OsWrapper7IThreadC2Ev
        BL       _ZN9OsWrapper7IThreadC2Ev
        MOVS     R0,R4
        POP      {R4,PC}          ;; return
          CFI EndBlock cfiBlock13

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN9OsWrapper5Event6SignalEv
          CFI Block cfiBlock14 Using cfiCommon0
          CFI Function _ZN9OsWrapper5Event6SignalEv
        THUMB
// __interwork __vfp void OsWrapper::Event::Signal()
_ZN9OsWrapper5Event6SignalEv:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
        LDR      R1,[R0, #+32]
          CFI FunCall _ZN9OsWrapper11RtosWrapper12wSignalEventERKPvj
        BL       _ZN9OsWrapper11RtosWrapper12wSignalEventERKPvj
        POP      {R0,PC}          ;; return
          CFI EndBlock cfiBlock14

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZNK8GpioPortI5GPIOCLj13EE12SetAlternateEv
          CFI Block cfiBlock15 Using cfiCommon0
          CFI Function _ZNK8GpioPortI5GPIOCLj13EE12SetAlternateEv
        THUMB
// __interwork __vfp void GpioPort<GPIOC, 13U>::SetAlternate() const
_ZNK8GpioPortI5GPIOCLj13EE12SetAlternateEv:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
          CFI FunCall _ZN12RegisterBaseILj1073874944ELj32E13ReadWriteModeE3GetIS0_vEEjv
        BL       _ZN12RegisterBaseILj1073874944ELj32E13ReadWriteModeE3GetIS0_vEEjv
        STR      R0,[SP, #+0]
        LDR      R0,[SP, #+0]
        BICS     R0,R0,#0xC000000
        STR      R0,[SP, #+0]
        LDR      R0,[SP, #+0]
        ORRS     R0,R0,#0x8000000
        STR      R0,[SP, #+0]
        LDR      R0,[SP, #+0]
          CFI FunCall _ZN12RegisterBaseILj1073874944ELj32E13ReadWriteModeE5WriteIS0_vEEvj
        BL       _ZN12RegisterBaseILj1073874944ELj32E13ReadWriteModeE5WriteIS0_vEEvj
        POP      {R0,PC}          ;; return
          CFI EndBlock cfiBlock15

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZNK8GpioPortI5GPIOCLj13EE8SetInputEv
          CFI Block cfiBlock16 Using cfiCommon0
          CFI Function _ZNK8GpioPortI5GPIOCLj13EE8SetInputEv
        THUMB
// __interwork __vfp void GpioPort<GPIOC, 13U>::SetInput() const
_ZNK8GpioPortI5GPIOCLj13EE8SetInputEv:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
          CFI FunCall _ZN12RegisterBaseILj1073874944ELj32E13ReadWriteModeE3GetIS0_vEEjv
        BL       _ZN12RegisterBaseILj1073874944ELj32E13ReadWriteModeE3GetIS0_vEEjv
        STR      R0,[SP, #+0]
        LDR      R0,[SP, #+0]
        BICS     R0,R0,#0xC000000
        STR      R0,[SP, #+0]
        LDR      R0,[SP, #+0]
          CFI FunCall _ZN12RegisterBaseILj1073874944ELj32E13ReadWriteModeE5WriteIS0_vEEvj
        BL       _ZN12RegisterBaseILj1073874944ELj32E13ReadWriteModeE5WriteIS0_vEEvj
        POP      {R0,PC}          ;; return
          CFI EndBlock cfiBlock16

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZNK8GpioPortI5GPIOCLj13EE9SetOutputEv
          CFI Block cfiBlock17 Using cfiCommon0
          CFI Function _ZNK8GpioPortI5GPIOCLj13EE9SetOutputEv
        THUMB
// __interwork __vfp void GpioPort<GPIOC, 13U>::SetOutput() const
_ZNK8GpioPortI5GPIOCLj13EE9SetOutputEv:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
          CFI FunCall _ZN12RegisterBaseILj1073874944ELj32E13ReadWriteModeE3GetIS0_vEEjv
        BL       _ZN12RegisterBaseILj1073874944ELj32E13ReadWriteModeE3GetIS0_vEEjv
        STR      R0,[SP, #+0]
        LDR      R0,[SP, #+0]
        BICS     R0,R0,#0xC000000
        STR      R0,[SP, #+0]
        LDR      R0,[SP, #+0]
        ORRS     R0,R0,#0x4000000
        STR      R0,[SP, #+0]
        LDR      R0,[SP, #+0]
          CFI FunCall _ZN12RegisterBaseILj1073874944ELj32E13ReadWriteModeE5WriteIS0_vEEvj
        BL       _ZN12RegisterBaseILj1073874944ELj32E13ReadWriteModeE5WriteIS0_vEEvj
        POP      {R0,PC}          ;; return
          CFI EndBlock cfiBlock17

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZNK8GpioPortI5GPIOCLj13EE5IsSetEv
          CFI Block cfiBlock18 Using cfiCommon0
          CFI Function _ZNK8GpioPortI5GPIOCLj13EE5IsSetEv
        THUMB
// __interwork __vfp bool GpioPort<GPIOC, 13U>::IsSet() const
_ZNK8GpioPortI5GPIOCLj13EE5IsSetEv:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
          CFI FunCall _ZN12RegisterBaseILj1073874960ELj32E8ReadModeE3GetIS0_vEEjv
        BL       _ZN12RegisterBaseILj1073874960ELj32E8ReadModeE3GetIS0_vEEjv
        LSRS     R0,R0,#+13
        ANDS     R0,R0,#0x1
        POP      {R1,PC}          ;; return
          CFI EndBlock cfiBlock18

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZNK8GpioPortI5GPIOCLj13EE3SetEv
          CFI Block cfiBlock19 Using cfiCommon0
          CFI Function _ZNK8GpioPortI5GPIOCLj13EE3SetEv
        THUMB
// __interwork __vfp void GpioPort<GPIOC, 13U>::Set() const
_ZNK8GpioPortI5GPIOCLj13EE3SetEv:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
          CFI FunCall _ZN12RegisterBaseILj1073874964ELj32E13ReadWriteModeE3GetIS0_vEEjv
        BL       _ZN12RegisterBaseILj1073874964ELj32E13ReadWriteModeE3GetIS0_vEEjv
        ORRS     R0,R0,#0x2000
          CFI FunCall _ZN12RegisterBaseILj1073874964ELj32E13ReadWriteModeE5WriteIS0_vEEvj
        BL       _ZN12RegisterBaseILj1073874964ELj32E13ReadWriteModeE5WriteIS0_vEEvj
        POP      {R0,PC}          ;; return
          CFI EndBlock cfiBlock19

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZNK8GpioPortI5GPIOCLj13EE5ResetEv
          CFI Block cfiBlock20 Using cfiCommon0
          CFI Function _ZNK8GpioPortI5GPIOCLj13EE5ResetEv
        THUMB
// __interwork __vfp void GpioPort<GPIOC, 13U>::Reset() const
_ZNK8GpioPortI5GPIOCLj13EE5ResetEv:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
          CFI FunCall _ZN12RegisterBaseILj1073874964ELj32E13ReadWriteModeE3GetIS0_vEEjv
        BL       _ZN12RegisterBaseILj1073874964ELj32E13ReadWriteModeE3GetIS0_vEEjv
        ORRS     R0,R0,#0x2000
          CFI FunCall _ZN12RegisterBaseILj1073874964ELj32E13ReadWriteModeE5WriteIS0_vEEvj
        BL       _ZN12RegisterBaseILj1073874964ELj32E13ReadWriteModeE5WriteIS0_vEEvj
        POP      {R0,PC}          ;; return
          CFI EndBlock cfiBlock20

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN12RegisterBaseILj1073874944ELj32E13ReadWriteModeE5WriteIS0_vEEvj
          CFI Block cfiBlock21 Using cfiCommon0
          CFI Function _ZN12RegisterBaseILj1073874944ELj32E13ReadWriteModeE5WriteIS0_vEEvj
          CFI NoCalls
        THUMB
// __interwork __vfp void RegisterBase<1073874944U, 32U, ReadWriteMode>::Write<ReadWriteMode, void>(uint32_t)
_ZN12RegisterBaseILj1073874944ELj32E13ReadWriteModeE5WriteIS0_vEEvj:
        LDR.N    R1,??Write_0     ;; 0x40020800
        STR      R0,[R1, #+0]
        BX       LR               ;; return
        Nop      
        DATA
??Write_0:
        DATA32
        DC32     0x40020800
          CFI EndBlock cfiBlock21

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN12RegisterBaseILj1073874964ELj32E13ReadWriteModeE5WriteIS0_vEEvj
          CFI Block cfiBlock22 Using cfiCommon0
          CFI Function _ZN12RegisterBaseILj1073874964ELj32E13ReadWriteModeE5WriteIS0_vEEvj
          CFI NoCalls
        THUMB
// __interwork __vfp void RegisterBase<1073874964U, 32U, ReadWriteMode>::Write<ReadWriteMode, void>(uint32_t)
_ZN12RegisterBaseILj1073874964ELj32E13ReadWriteModeE5WriteIS0_vEEvj:
        LDR.N    R1,??Write_1     ;; 0x40020814
        STR      R0,[R1, #+0]
        BX       LR               ;; return
        Nop      
        DATA
??Write_1:
        DATA32
        DC32     0x40020814
          CFI EndBlock cfiBlock22

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN12RegisterBaseILj1073874944ELj32E13ReadWriteModeE3GetIS0_vEEjv
          CFI Block cfiBlock23 Using cfiCommon0
          CFI Function _ZN12RegisterBaseILj1073874944ELj32E13ReadWriteModeE3GetIS0_vEEjv
          CFI NoCalls
        THUMB
// __interwork __vfp uint32_t RegisterBase<1073874944U, 32U, ReadWriteMode>::Get<ReadWriteMode, void>()
_ZN12RegisterBaseILj1073874944ELj32E13ReadWriteModeE3GetIS0_vEEjv:
        LDR.N    R0,??Get_0       ;; 0x40020800
        LDR      R0,[R0, #+0]
        BX       LR               ;; return
        Nop      
        DATA
??Get_0:
        DATA32
        DC32     0x40020800
          CFI EndBlock cfiBlock23

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN12RegisterBaseILj1073874960ELj32E8ReadModeE3GetIS0_vEEjv
          CFI Block cfiBlock24 Using cfiCommon0
          CFI Function _ZN12RegisterBaseILj1073874960ELj32E8ReadModeE3GetIS0_vEEjv
          CFI NoCalls
        THUMB
// __interwork __vfp uint32_t RegisterBase<1073874960U, 32U, ReadMode>::Get<ReadMode, void>()
_ZN12RegisterBaseILj1073874960ELj32E8ReadModeE3GetIS0_vEEjv:
        LDR.N    R0,??Get_1       ;; 0x40020810
        LDR      R0,[R0, #+0]
        BX       LR               ;; return
        Nop      
        DATA
??Get_1:
        DATA32
        DC32     0x40020810
          CFI EndBlock cfiBlock24

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN12RegisterBaseILj1073874964ELj32E13ReadWriteModeE3GetIS0_vEEjv
          CFI Block cfiBlock25 Using cfiCommon0
          CFI Function _ZN12RegisterBaseILj1073874964ELj32E13ReadWriteModeE3GetIS0_vEEjv
          CFI NoCalls
        THUMB
// __interwork __vfp uint32_t RegisterBase<1073874964U, 32U, ReadWriteMode>::Get<ReadWriteMode, void>()
_ZN12RegisterBaseILj1073874964ELj32E13ReadWriteModeE3GetIS0_vEEjv:
        LDR.N    R0,??Get_2       ;; 0x40020814
        LDR      R0,[R0, #+0]
        BX       LR               ;; return
        Nop      
        DATA
??Get_2:
        DATA32
        DC32     0x40020814
          CFI EndBlock cfiBlock25

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZNK6ButtonIL_Z13UserButtonPinEE8IsPushedEv
          CFI Block cfiBlock26 Using cfiCommon0
          CFI Function _ZNK6ButtonIL_Z13UserButtonPinEE8IsPushedEv
        THUMB
// __interwork __vfp bool Button<UserButtonPin>::IsPushed() const
_ZNK6ButtonIL_Z13UserButtonPinEE8IsPushedEv:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
        LDR.N    R0,??IsPushed_0
        LDR      R1,[R0, #+0]
        LDR      R1,[R1, #+12]
          CFI FunCall
        BLX      R1
        CMP      R0,#+0
        BNE.N    ??IsPushed_1
        MOVS     R0,#+1
        B.N      ??IsPushed_2
??IsPushed_1:
        MOVS     R0,#+0
??IsPushed_2:
        UXTB     R0,R0            ;; ZeroExt  R0,R0,#+24,#+24
        POP      {R1,PC}          ;; return
        DATA
??IsPushed_0:
        DATA32
        DC32     UserButtonPin
          CFI EndBlock cfiBlock26

        SECTION `.iar_vfe_vtableinfo_ZTV8GpioPortI5GPIOCLj13EE`:DATA:NOALLOC:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        SECTION_GROUP _ZTV8GpioPortI5GPIOCLj13EE
        DATA
        DC32    _ZTV8GpioPortI5GPIOCLj13EE
        DC32    8
        DC32    2
        DC32    _ZTI5IGpio
        DC32    0
        DC32    1
        DC32    _ZTI8GpioPortI5GPIOCLj13EE
        DC32    1
        DC32    2
        DC32    0
        DC32    _ZTI8GpioPortI5GPIOCLj13EE
        DC32    1
        DC32    2
        DC32    0

        SECTION `.iar_vfe_vtableinfo_ZTV10ButtonTask`:DATA:NOALLOC:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        SECTION_GROUP _ZTV10ButtonTask
        DATA
        DC32    _ZTV10ButtonTask
        DC32    3
        DC32    3
        DC32    _ZTI10ButtonTask
        DC32    1
        DC32    2
        DC32    0
        DC32    _ZTIN9OsWrapper6ThreadILj128EEE
        DC32    0
        DC32    1
        DC32    _ZTI10ButtonTask
        DC32    1
        DC32    2
        DC32    0
        DC32    _ZTIN9OsWrapper7IThreadE
        DC32    0
        DC32    1
        DC32    _ZTIN9OsWrapper6ThreadILj128EEE
        DC32    0
        DC32    1
        DC32    _ZTI10ButtonTask
        DC32    1
        DC32    2
        DC32    0

        SECTION `.iar_vfe_vcallinfo_ZNK6ButtonIL_Z13UserButtonPinEE8IsPushedEv`:DATA:NOALLOC:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        SECTION_GROUP _ZNK6ButtonIL_Z13UserButtonPinEE8IsPushedEv
        DATA
        DC32    _ZNK6ButtonIL_Z13UserButtonPinEE8IsPushedEv
        DC32    0
        DC32    0
        DC32    1
        DC32    _ZTI8GpioPortI5GPIOCLj13EE
        DC32    1
        DC32    8
        DC32    0
        DC32    0

        SECTION `.iar_vfe_header`:DATA:NOALLOC:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        DATA
        DC32 0

        END
// 
//   4 bytes in section .data
// 231 bytes in section .rodata
// 482 bytes in section .text
// 
// 76 bytes of CODE  memory (+ 406 bytes shared)
//  8 bytes of CONST memory (+ 223 bytes shared)
//  0 bytes of DATA  memory (+   4 bytes shared)
//
//Errors: none
//Warnings: none
