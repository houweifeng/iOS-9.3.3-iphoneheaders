/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:03 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSSQLStatement.h>

@interface NSSQLiteStatement : NSSQLStatement {

	sqlite3_stmtRef _cachedSQLiteStatement;

}
-(void)clearCaches;
-(sqlite3_stmtRef)cachedSQLiteStatement;
-(void)setCachedSQLiteStatement:(sqlite3_stmtRef)arg1 ;
-(void)dealloc;
-(void)finalize;
@end

