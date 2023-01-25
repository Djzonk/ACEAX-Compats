
# ACE ARSENAL EXTENDED COMPATS

A Ever growing collection of compats for [ACE3 Arsenal Extended](https://github.com/jetelain/AceArsenalExtended)

Contributions are always welcome!

## How to Contribute
### How to build
You will need [HEMTT Version: 0.10 Alpha 14](https://github.com/BrettMayson/HEMTT/releases/tag/v0.10.0-a14)
#### If you are building a single compat
1. Put the Hemtt in the compat folder right next to the mod.cpp
2. Use your terminal in the compat folder

#### If you are building an aio *TO BE IMPLIMENTED*
1. Put Hemtt in the project root
2. Use the Python tools in the `tools` folder

### How to make a new compat
1. Copy the `template_component` from the `extras` folder to the main directory.
2. Raname it an appropriate name to represent what mod the compat is for. **Keep Each Compat To One Mod**  
    If you are making a compat for a mod that has a parent mod add a prefix to the folder refrence the table below for existing ones or add your own.  
    `Mods with the same prefix will be packed into AIO versions aswell as their seperate mods`
3. Replace the following placeholder names.  
  -`TMPL_mod_name` name for the compat i.e. `NI Arms SCAR ACEAX Compat`  
  -`TMPL_mod_prefix` prefix for the compat (no spaces) i.e. `niarmsscar_aceax_compat`

### AIO Mod Setup
This will tell the build tools to create one for the prefixes and upload it.  
**Auto Build and publish tools still to be added**
1. Copy the `template_aio` from the `extras` to the main directory.
2. Rename it the prefix you plan on using i.e. `ni` for NI arms
3. Add update the prefix table

### Parent Mod Prefixs
|Prefix|Mod Name|
|------|--------|
|ni    |NI ARMS |
