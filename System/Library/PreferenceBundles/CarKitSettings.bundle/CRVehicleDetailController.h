/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:19 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class CRPairedVehicleManager;

@interface CRVehicleDetailController : PSListController {

	BOOL _carPlayEnabled;
	CRPairedVehicleManager* _vehicleManager;

}

@property (nonatomic,retain) CRPairedVehicleManager * vehicleManager;              //@synthesize vehicleManager=_vehicleManager - In the implementation block
@property (assign,nonatomic) BOOL carPlayEnabled;                                  //@synthesize carPlayEnabled=_carPlayEnabled - In the implementation block
-(void)setCarPlayEnabled:(BOOL)arg1 ;
-(void)deleteVehicle;
-(BOOL)carPlayEnabled;
-(void)_popIfVisible;
-(void)dealloc;
-(void)handleCarPlayAllowedDidChange;
-(id)specifiers;
-(void)setVehicleManager:(CRPairedVehicleManager *)arg1 ;
-(id)_carPlayVehicle;
-(CRPairedVehicleManager *)vehicleManager;
-(void)handlePairedVehiclesChanged:(id)arg1 ;
-(void)setCarPlayEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)carPlayEnabled:(id)arg1 ;
@end
