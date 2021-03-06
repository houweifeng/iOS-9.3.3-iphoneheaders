/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:13 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EAAccessoryDelegate;
@class NSString, NSDictionary, NSMutableArray, NSArray;

@interface EAAccessoryInternal : NSObject {

	BOOL _connected;
	unsigned _connectionID;
	NSString* _name;
	NSString* _manufacturer;
	NSString* _modelNumber;
	NSString* _serialNumber;
	NSString* _firmwareRevision;
	NSString* _hardwareRevision;
	NSString* _dockType;
	NSString* _macAddress;
	NSString* _preferredApp;
	int _classType;
	NSDictionary* _audioPorts;
	unsigned _capabilities;
	BOOL _notPresentInIAPAccessoriesArray;
	NSMutableArray* _sessionsList;
	NSArray* _eqNames;
	int _locationSentenceTypesMask;
	NSDictionary* _vehicleInfoSupportedTypes;
	NSDictionary* _vehicleInfoInitialData;
	NSArray* _cameraComponents;
	NSDictionary* _protocols;
	id<EAAccessoryDelegate> _delegate;
	BOOL _pointOfInterestHandoffEnabled;
	BOOL _hasIPConnection;
	BOOL _isAvailableOverBonjour;
	unsigned _eqIndex;
	NSString* _bonjourName;
	/*^block*/id _pairingCompletionBlock;
	/*^block*/id _WiFiCredentialsCompletionBlock;

}

@property (assign,nonatomic) BOOL connected;                                        //@synthesize connected=_connected - In the implementation block
@property (assign,nonatomic) unsigned connectionID;                                 //@synthesize connectionID=_connectionID - In the implementation block
@property (nonatomic,copy) NSString * manufacturer;                                 //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,copy) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * modelNumber;                                  //@synthesize modelNumber=_modelNumber - In the implementation block
@property (nonatomic,copy) NSString * serialNumber;                                 //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,copy) NSString * firmwareRevision;                             //@synthesize firmwareRevision=_firmwareRevision - In the implementation block
@property (nonatomic,copy) NSString * hardwareRevision;                             //@synthesize hardwareRevision=_hardwareRevision - In the implementation block
@property (nonatomic,copy) NSString * dockType;                                     //@synthesize dockType=_dockType - In the implementation block
@property (nonatomic,copy) NSString * macAddress;                                   //@synthesize macAddress=_macAddress - In the implementation block
@property (nonatomic,copy) NSString * preferredApp;                                 //@synthesize preferredApp=_preferredApp - In the implementation block
@property (assign,nonatomic) int classType;                                         //@synthesize classType=_classType - In the implementation block
@property (nonatomic,retain) NSDictionary * audioPorts;                             //@synthesize audioPorts=_audioPorts - In the implementation block
@property (assign,nonatomic) unsigned capabilities;                                 //@synthesize capabilities=_capabilities - In the implementation block
@property (assign,nonatomic) BOOL notPresentInIAPAccessoriesArray;                  //@synthesize notPresentInIAPAccessoriesArray=_notPresentInIAPAccessoriesArray - In the implementation block
@property (nonatomic,readonly) NSArray * sessionsList; 
@property (nonatomic,retain) NSArray * eqNames;                                     //@synthesize eqNames=_eqNames - In the implementation block
@property (assign,nonatomic) unsigned eqIndex;                                      //@synthesize eqIndex=_eqIndex - In the implementation block
@property (assign,nonatomic) int locationSentenceTypesMask;                         //@synthesize locationSentenceTypesMask=_locationSentenceTypesMask - In the implementation block
@property (nonatomic,retain) NSDictionary * vehicleInfoSupportedTypes;              //@synthesize vehicleInfoSupportedTypes=_vehicleInfoSupportedTypes - In the implementation block
@property (nonatomic,retain) NSDictionary * vehicleInfoInitialData;                 //@synthesize vehicleInfoInitialData=_vehicleInfoInitialData - In the implementation block
@property (nonatomic,retain) NSArray * cameraComponents;                            //@synthesize cameraComponents=_cameraComponents - In the implementation block
@property (nonatomic,retain) NSDictionary * protocols;                              //@synthesize protocols=_protocols - In the implementation block
@property (assign,nonatomic) id<EAAccessoryDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * bonjourName;                                  //@synthesize bonjourName=_bonjourName - In the implementation block
@property (assign,nonatomic) BOOL hasIPConnection;                                  //@synthesize hasIPConnection=_hasIPConnection - In the implementation block
@property (assign,nonatomic) BOOL isAvailableOverBonjour;                           //@synthesize isAvailableOverBonjour=_isAvailableOverBonjour - In the implementation block
@property (assign) BOOL pointOfInterestHandoffEnabled;                              //@synthesize pointOfInterestHandoffEnabled=_pointOfInterestHandoffEnabled - In the implementation block
@property (copy) id pairingCompletionBlock;                                         //@synthesize pairingCompletionBlock=_pairingCompletionBlock - In the implementation block
@property (copy) id WiFiCredentialsCompletionBlock;                                 //@synthesize WiFiCredentialsCompletionBlock=_WiFiCredentialsCompletionBlock - In the implementation block
-(void)setClassType:(int)arg1 ;
-(int)classType;
-(void)setDelegate:(id<EAAccessoryDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<EAAccessoryDelegate>)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(unsigned)connectionID;
-(void)setConnectionID:(unsigned)arg1 ;
-(void)setManufacturer:(NSString *)arg1 ;
-(NSString *)manufacturer;
-(void)setConnected:(BOOL)arg1 ;
-(BOOL)connected;
-(void)setCapabilities:(unsigned)arg1 ;
-(unsigned)capabilities;
-(void)setModelNumber:(NSString *)arg1 ;
-(void)setFirmwareRevision:(NSString *)arg1 ;
-(void)setHardwareRevision:(NSString *)arg1 ;
-(void)setDockType:(NSString *)arg1 ;
-(void)setPreferredApp:(NSString *)arg1 ;
-(void)setEqNames:(NSArray *)arg1 ;
-(void)setLocationSentenceTypesMask:(int)arg1 ;
-(void)setVehicleInfoSupportedTypes:(NSDictionary *)arg1 ;
-(void)setVehicleInfoInitialData:(NSDictionary *)arg1 ;
-(void)setCameraComponents:(NSArray *)arg1 ;
-(void)setAudioPorts:(NSDictionary *)arg1 ;
-(void)setPointOfInterestHandoffEnabled:(BOOL)arg1 ;
-(NSString *)dockType;
-(void)setNotPresentInIAPAccessoriesArray:(BOOL)arg1 ;
-(NSArray *)sessionsList;
-(BOOL)notPresentInIAPAccessoriesArray;
-(NSDictionary *)audioPorts;
-(BOOL)pointOfInterestHandoffEnabled;
-(int)locationSentenceTypesMask;
-(void)setPairingCompletionBlock:(id)arg1 ;
-(id)pairingCompletionBlock;
-(NSDictionary *)vehicleInfoSupportedTypes;
-(NSDictionary *)vehicleInfoInitialData;
-(NSArray *)cameraComponents;
-(void)setBonjourName:(NSString *)arg1 ;
-(void)setHasIPConnection:(BOOL)arg1 ;
-(void)setIsAvailableOverBonjour:(BOOL)arg1 ;
-(id)WiFiCredentialsCompletionBlock;
-(void)setWiFiCredentialsCompletionBlock:(id)arg1 ;
-(NSString *)serialNumber;
-(void)removeSession:(id)arg1 ;
-(void)setSerialNumber:(NSString *)arg1 ;
-(NSString *)macAddress;
-(void)setMacAddress:(NSString *)arg1 ;
-(void)addSession:(id)arg1 ;
-(NSString *)bonjourName;
-(BOOL)isAvailableOverBonjour;
-(BOOL)hasIPConnection;
-(NSString *)preferredApp;
-(NSArray *)eqNames;
-(void)setEqIndex:(unsigned)arg1 ;
-(unsigned)eqIndex;
-(NSDictionary *)protocols;
-(void)setProtocols:(NSDictionary *)arg1 ;
-(NSString *)modelNumber;
-(NSString *)hardwareRevision;
-(NSString *)firmwareRevision;
@end

