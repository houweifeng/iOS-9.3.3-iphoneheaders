/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoardUI/BSUIMappedImageCache.h>

@interface SBFMappedImageCache : BSUIMappedImageCache
+(id)wallpaperCache;
+(id)systemAppPersistenteCache;
-(id)initWithDescription:(id)arg1 ;
-(id)imageForKey:(id)arg1 generateImageWithBlockIfNecessary:(/*^block*/id)arg2 ;
-(id)imageForKey:(id)arg1 options:(int)arg2 generateImageWithBlockIfNecessary:(/*^block*/id)arg3 ;
-(id)imageForKey:(id)arg1 options:(int)arg2 ;
-(void)warmupImageForKey:(id)arg1 ;
-(id)imageForKey:(id)arg1 cacheOptions:(unsigned long long)arg2 generateImageWithBlockIfNecessary:(/*^block*/id)arg3 ;
@end
