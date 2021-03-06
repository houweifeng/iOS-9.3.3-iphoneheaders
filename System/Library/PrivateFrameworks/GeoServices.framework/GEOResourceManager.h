/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOResourceManifestConfiguration;

@interface GEOResourceManager : NSObject {

	GEOResourceManifestConfiguration* _configuration;

}
+(id)sharedManagerForTileGroupIdentifier:(unsigned)arg1 ;
+(id)sharedManagerForConfiguration:(id)arg1 ;
+(id)sharedManager;
-(void)dealloc;
-(id)initWithConfiguration:(id)arg1 ;
-(id)dataForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 ;
-(id)allResourceNames;
-(BOOL)isDevResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(/*^block*/id)arg3 ;
-(id)pathForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(/*^block*/id)arg3 ;
-(id)pathForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 ;
-(id)dataForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(/*^block*/id)arg3 ;
@end

