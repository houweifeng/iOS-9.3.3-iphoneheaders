/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:22 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EDTokenTreeNode : NSObject {

	unsigned mTokenIndex;
	int mTokenType;
	EDTokenTreeNode* mFirstChild;
	EDTokenTreeNode* mSibling;

}
+(id)tokenTreeNodeWithIndexAndType:(unsigned)arg1 type:(int)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)firstChild;
-(id)initWithIndexAndType:(unsigned)arg1 type:(int)arg2 ;
-(unsigned)tokenIndex;
-(void)setFirstChild:(id)arg1 ;
-(id)sibling;
-(void)setSibling:(id)arg1 ;
@end
