/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:16 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSLock, NSBundle;

@interface _NSBundleODRDataCommon : NSObject {

	NSMutableDictionary* _assetPackToURL;
	NSLock* _lock;
	NSBundle* _bundle;
	long long _sandboxToken;

}
-(void)assetPacksBecameAvailable:(id)arg1 ;
-(void)assetPacksBecameUnavailable:(id)arg1 ;
-(id)URLForAssetPack:(id)arg1 ;
-(void)dealloc;
-(id)initWithBundle:(id)arg1 ;
@end
