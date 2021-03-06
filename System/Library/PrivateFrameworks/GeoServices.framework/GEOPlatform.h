/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:37 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GEOPlatform : NSObject
+(id)sharedPlatform;
+(void)setIsRunningInGeod:(BOOL)arg1 ;
-(id)buildVersion;
-(id)clientCapabilities;
-(id)hardwareIdentifier;
-(id)osVersion;
-(double)deviceScreenScale;
-(BOOL)isInternalInstall;
-(BOOL)supportsNewiOS9Features;
-(BOOL)mapsFeatureFreedomEnabled;
-(long long)deviceScreenWidthInPixels;
-(BOOL)supportsNavigation;
-(id)productName;
-(BOOL)supportsWatchPairing;
-(BOOL)supportsForceTouch;
-(long long)deviceScreenHeightInPixels;
-(BOOL)_deviceSupportsNavigation;
-(BOOL)supportsRealisticTiles;
@end

