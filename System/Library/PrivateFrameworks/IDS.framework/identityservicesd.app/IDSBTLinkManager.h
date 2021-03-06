/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:48 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/CBCentralManagerDelegate.h>
#import <identityservicesd/CBPeripheralManagerDelegate.h>
#import <identityservicesd/CBScalablePipeManagerDelegate.h>

@protocol OS_dispatch_queue, IDSBTLinkManagerDelegate;
@class CBCentralManager, CBPeripheralManager, CBScalablePipeManager, CBPeripheral, NSMutableArray, NSString, NSMutableDictionary, NSObject;

@interface IDSBTLinkManager : NSObject <CBCentralManagerDelegate, CBPeripheralManagerDelegate, CBScalablePipeManagerDelegate> {

	CBCentralManager* _centralManager;
	CBPeripheralManager* _peripheralManager;
	CBScalablePipeManager* _pipeManager;
	CBPeripheral* _pipePeripheral;
	NSMutableArray* _pendingPipes;
	NSString* _pipePeripheralUUIDString;
	BOOL _pipeRegistered;
	BOOL _isCentral;
	NSMutableDictionary* _linkIDToLink;
	BOOL _isPipeConnectingOrConnected;
	BOOL _isAdvertising;
	NSObject*<OS_dispatch_queue> _managerQueue;
	id<IDSBTLinkManagerDelegate> _delegate;
	BOOL _isPoweredOn;

}

@property (readonly) NSString * pairedDevice;                       //@synthesize pipePeripheralUUIDString=_pipePeripheralUUIDString - In the implementation block
@property (nonatomic,readonly) BOOL isPoweredOn;                    //@synthesize isPoweredOn=_isPoweredOn - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeLink:(id)arg1 ;
-(void)obliterateConnectionInfo;
-(id)initWithDelegate:(id)arg1 pairedDevice:(id)arg2 ;
-(void)updatePairedDevice:(id)arg1 ;
-(BOOL)isPoweredOn;
-(void)_connectNow;
-(void)_advertiseNow;
-(void)_stopAdvertising;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)connect;
-(void)scalablePipeManagerDidUpdateState:(id)arg1 ;
-(void)scalablePipeManager:(id)arg1 didRegisterEndpoint:(id)arg2 error:(id)arg3 ;
-(void)scalablePipeManager:(id)arg1 didUnregisterEndpoint:(id)arg2 ;
-(void)scalablePipeManager:(id)arg1 pipeDidConnect:(id)arg2 ;
-(void)scalablePipeManager:(id)arg1 pipeDidDisconnect:(id)arg2 error:(id)arg3 ;
-(void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2 ;
-(void)peripheralManagerDidUpdateState:(id)arg1 ;
-(void)setLinkPreferences:(id)arg1 ;
-(NSString *)pairedDevice;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2 ;
-(void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3 ;
@end

