/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:03 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MRAssetPlayerDelegate;
#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class MRImage, MRAssetMaster;

@interface MRAssetPlayer : NSObject {

	int _retainByUserCount;
	CGSize _size;
	double _time;
	MRImage* _image;
	MRAssetMaster* _master;
	id<MRAssetPlayerDelegate> _delegate;
	BOOL _thumbnailIsOK;
	BOOL _isMonochromatic;
	BOOL _generatesMipmap;
	BOOL _usesPowerOfTwo;
	BOOL _isStill;

}

@property (retain) id<MRAssetPlayerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) BOOL isMonochromatic;                          //@synthesize isMonochromatic=_isMonochromatic - In the implementation block
@property (readonly) BOOL generatesMipmap;                          //@synthesize generatesMipmap=_generatesMipmap - In the implementation block
@property (readonly) BOOL usesPowerOfTwo;                           //@synthesize usesPowerOfTwo=_usesPowerOfTwo - In the implementation block
@property (readonly) BOOL thumbnailIsOK;                            //@synthesize thumbnailIsOK=_thumbnailIsOK - In the implementation block
@property (readonly) BOOL newImageIsAvailable; 
-(BOOL)isMonochromatic;
-(BOOL)newImageIsAvailable;
-(id)retainedByUserImageAtTime:(double)arg1 displayLinkTimestamp:(double)arg2 ;
-(id)initWithPath:(id)arg1 size:(CGSize)arg2 master:(id)arg3 andOptions:(id)arg4 ;
-(id)retainedByUserCurrentImage;
-(BOOL)generatesMipmap;
-(BOOL)thumbnailIsOK;
-(BOOL)usesPowerOfTwo;
-(void)loadForTime:(double)arg1 ;
-(void)releaseByUser;
-(id)retainByUser;
-(void)setDelegate:(id<MRAssetPlayerDelegate>)arg1 ;
-(void)dealloc;
-(id<MRAssetPlayerDelegate>)delegate;
@end
