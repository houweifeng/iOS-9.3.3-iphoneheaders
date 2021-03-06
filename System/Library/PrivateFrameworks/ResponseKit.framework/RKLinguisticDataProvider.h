/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:44 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ResponseKit/ResponseKit-Structs.h>
#import <libobjc.A.dylib/RKPolarityDataProvider.h>

@class NSMutableDictionary;

@interface RKLinguisticDataProvider : NSObject <RKPolarityDataProvider> {

	NSMutableDictionary* _polarityMapsByLanguageID;

}

@property (retain) NSMutableDictionary * polarityMapsByLanguageID;              //@synthesize polarityMapsByLanguageID=_polarityMapsByLanguageID - In the implementation block
-(id)init;
-(NSMutableDictionary *)polarityMapsByLanguageID;
-(LSMMapRef)polarityMapForLanguageID:(id)arg1 ;
-(void)setPolarityMapsByLanguageID:(NSMutableDictionary *)arg1 ;
@end

