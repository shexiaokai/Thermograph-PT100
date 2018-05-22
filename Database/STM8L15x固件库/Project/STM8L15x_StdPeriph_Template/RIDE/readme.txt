/** @page project_Ride Template project for RIDE toolchain

  @verbatim
  ******************** (C) COPYRIGHT 2013 STMicroelectronics *******************
  * @file    readme.txt
  * @author  MCD Application Team
  * @version V1.6.0
  * @date    28-June-2013
  * @brief   This sub-directory contains all the user-modifiable files needed to
  *          create a new project linked with the STM8L15x/16x/05x/AL31_L Standard
  *          Peripherals Library and working with RIDE7 software toolchain.
  ******************************************************************************
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software 
  * distributed under the License is distributed on an "AS IS" BASIS, 
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  @endverbatim
  
  @par Project description

  This folder contains a standard RIDE template workspace with six projects 
  including all the user-modifiable files that are necessary to create a new project.
  These project templates can be used by mean of minor updates in the library files
  to run theSTM8L15x_StdPeriph_Examples, or custom user applications.
  
          
  @par Directories contents
  
  - STM8L15x_StdPeriph_Template\\RIDE
     - project.rprj                Workspace file
     - stm8l15xx2_3.rapp           Project file for Low density STM8L15x devices
     - stm8l15xx4_6.rapp           Project file for Medium density STM8L15x devices  
     - stm8l15xx8_16xx8.rapp       Project file for High density STM8L15x devices
     - stm8l05xx3.rapp             Project file for Value Low density STM8L05x devices
     - stm8l05xx6.rapp             Project file for Value Medium density STM8L05x devices  
     - stm8l05xx8.rapp             Project file for Value High density STM8L05x devices
     - stm8l15x_ob.asm             File required for option bytes configuration


  @par How to use it ?

  - Open the RIDE workspace (project.rprj)
  - Choose the desired project related to the used product from the list: 
  in the "view Project Explorer" --> Right click on the desired project 
  and select "Set as StartUp application" 
  - Rebuild all files: : in the "view Project Explorer" Right click on 
  the active application and select "Build" 
  - Load project image: Debug->Load(Ctrl+L)
  - Run program: Debug->Start (Ctrl+D)

 @note
  - Low-Density devices are STM8L15x microcontrollers where the Flash memory 
    density ranges between 4 and 8 Kbytes.
  - Medium-Density devices are STM8L15x microcontrollers where the 
    Flash memory density ranges between 16 and 32 Kbytes.
  - Medium density Plus devices are STM8L151R6, STM8L152R6 microcontrollers 
    where the Flash memory density is fixed and equal to 32 Kbytes and with 
    wider range of peripheral and features than the medium density devices. 
  - High-Density devices are STM8L15x microcontrollers where the 
    Flash memory density is 64 Kbytes and with the same peripheral set than 
    Medium Density Plus devices.
  - Value line low density STM8L05xx devices are STM8L051x3 microcontrollers
    with 8-KB Flash
  - Value line medium density STM8L05xx devices are STM8L052x6 microcontrollers 
    with 32-KB Flash
  - Value line high density STM8L05xx devices: STM8L052x8 microcontrollers
    with 64-KB Flash
  - Medium density STM8AL31xx/STM8AL3Lxx devices: STM8AL3168, STM8AL3166, 
    STM8AL3148,STM8AL3146, STM8AL3138, STM8AL3136, STM8AL3L68, STM8AL3L66, 
    STM8AL3L48, STM8AL3L46 microcontrollers with 8-KB, 16-KB or 32-KB Flash

 * <h3><center>&copy; COPYRIGHT STMicroelectronics</center></h3>
 */
