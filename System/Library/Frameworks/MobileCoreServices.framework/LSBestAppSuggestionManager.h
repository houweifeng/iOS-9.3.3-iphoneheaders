/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:32 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LSBestAppSuggestionManagerDelegate;
@class LSBestAppSuggestion, NSXPCConnection;

@interface LSBestAppSuggestionManager : NSObject {

	id<LSBestAppSuggestionManagerDelegate> _delegate;
	BOOL _listeningForBestAppSuggestions;
	int _bestAppNotificationCount;
	LSBestAppSuggestion* _lastBestAppSuggestion;
	NSXPCConnection* _connection;

}

@property (__weak) id<LSBestAppSuggestionManagerDelegate> delegate; 
@property (retain) NSXPCConnection * connection;                                 //@synthesize connection=_connection - In the implementation block
-(id)init;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end

