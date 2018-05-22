/** @page ewstm8 Template project for IAR Embedded Workbench for STM8 (EWSTM8)

  @verbatim
  ******************** (C) COPYRIGHT 2014 STMicroelectronics *******************
  * @file    readme.txt
  * @author  MCD Application Team
  * @version V1.6.1
  * @date    30-September-2014
  * @brief   This sub-directory contains all the user-modifiable files needed to
  *          create a new project linked with the STM8L15x Standard Peripherals 
  *          Library and working with IAR Embedded Workbench for STM8 (EWSTM8)
  *          software toolchain.
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
  
  @par Description

  This folder contains a standard EWSTM8 template workspace with six projects 
  including all the user-modifiable files that are necessary to create a new project.
  These project templates can be used by mean of minor updates in the library files
  to run theSTM8L15x_StdPeriph_Examples, or custom user applications.  

  
  @par Directories contents

 - project .ewd/.eww/.ewp: A pre-configured project file with the provided library 
                           structure that produces an executable image with IAR 
                           Embedded Workbench.


  @par How to use it ?

 - Open the Project.eww workspace.
 - In the workspace toolbar select the project configuration:
     - STM8L15X_LD(STM8L15xx2_3)     : to configure the project for STM8L15x Low-density devices. 
     - STM8L15X_MD(STM8L15xx4_6)     : to configure the project for STM8L15x Medium-density devices.
     - STM8L15X_HD( STM8L15x8_16x8)  : to configure the project for STM8L15x High-density devices.
     - STM8L05X_LD_VL(STM8L05xx3)    : to configure the project for Value Low density STM8L05x devices. 
     - STM8L05X_MD_VL(STM8L05xx6)    : to configure the project for Value Medium density STM8L05x devices
     - STM8L05X_HD_VL(STM8L05xx8)    : to configure the project for Value High density STM8L05x devices
     
     @note The needed define symbols for these configurations are already declared in the
           preprocessor section.

 - Rebuild all files: Project->Rebuild all
 - Load project image: Project->Debug
 - Run program: Debug->Go(F5)
  
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
