/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class UIImage;

@interface MPMediaItemArtwork : NSObject {

	UIImage* _image;

}

@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) CGRect imageCropRect; 
-(CGRect)bounds;
-(id)init;
-(id)initWithImage:(id)arg1 ;
-(id)imageWithSize:(CGSize)arg1 ;
-(CGRect)imageCropRect;
@end

