/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBIcon.h>

@class SBIcon;

@interface SBPlaceholderIcon : SBIcon {

	id _nodeIdentifier;
	SBIcon* _icon;

}
+(id)emptyPlaceholder;
+(void)setGrabbedIcon:(id)arg1 ;
+(id)grabbedIconPlaceholder;
+(id)placeholderNodeIdentifierForIcon:(id)arg1 ;
+(id)placeholderForIcon:(id)arg1 ;
-(BOOL)shouldCacheImageForFormat:(int)arg1 ;
-(id)generateIconImage:(int)arg1 ;
-(id)automationID;
-(BOOL)isEmptyPlaceholder;
-(BOOL)isGrabbedIconPlaceholder;
-(id)nodeIdentifier;
-(id)referencedIcon;
-(id)_initWithNodeIdentifier:(id)arg1 icon:(id)arg2 ;
-(BOOL)isPlaceholder;
@end

