/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DataAccess-Structs.h"
#import <NSObject.h> // Unknown library


@interface DADataHandler : NSObject {
	void *_container;	// 4 = 0x4
}
@property(assign, nonatomic) void *container;	// G=0x32187585; S=0x321871f1; @synthesize=_container
+ (id)newDataHandlerForDataclass:(int)dataclass container:(void *)container;	// 0x321874f5
- (id)initWithContainer:(void *)container;	// 0x321871a1
- (BOOL)closeDBAndSave:(BOOL)save;	// 0x321874ad
// declared property getter: - (void *)container;	// 0x32187585
- (void *)copyLocalObjectFromId:(int)anId;	// 0x321872fd
- (CFArrayRef)copyOfAllLocalObjectsInContainer;	// 0x3218738d
- (int)dataclass;	// 0x3218726d
- (void)dealloc;	// 0x32187225
- (void)drainContainer;	// 0x321873d5
- (id)getDAObjectWithLocalItem:(void *)localItem serverId:(id)anId account:(id)account;	// 0x3218753d
- (int)getIdFromLocalObject:(void *)localObject;	// 0x321872b5
- (void)openDB;	// 0x32187465
- (BOOL)saveContainer;	// 0x32187345
// declared property setter: - (void)setContainer:(void *)container;	// 0x321871f1
- (BOOL)wipeServerIds;	// 0x3218741d
@end

