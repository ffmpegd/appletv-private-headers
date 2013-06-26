/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library

@class NSLock, NSMapTable;

@interface VMUProcList : NSObject {
	NSLock *procLock;	// 4 = 0x4
	NSMapTable *allProcs;	// 8 = 0x8
	NSMapTable *filteredProcs;	// 12 = 0xc
	BOOL appsOnly;	// 16 = 0x10
	BOOL ownedOnly;	// 17 = 0x11
}
@property(assign) BOOL appsOnly;	// G=0x355a510d; S=0x355a50dd; converted property
- (id)init;	// 0x355a48a9
- (void)_populateFromSystem;	// 0x355a4e61
- (void)addProcInfo:(id)info;	// 0x355a4b69
- (id)allNames;	// 0x355a52c1
- (id)allPIDs;	// 0x355a51bd
- (id)allPathNames;	// 0x355a53a5
- (id)allProcInfos;	// 0x355a516d
// converted property getter: - (BOOL)appsOnly;	// 0x355a510d
- (unsigned)count;	// 0x355a511d
- (void)dealloc;	// 0x355a49c1
- (void)finalize;	// 0x355a4a39
- (id)newestProcInfo;	// 0x355a5489
- (id)newestProcInfoSatisfyingCondition:(SEL)condition forTarget:(id)target;	// 0x355a57f5
- (id)newestProcInfoSatisfyingCondition:(SEL)condition forTarget:(id)target withContext:(void *)context;	// 0x355a56d5
- (id)newestProcInfoWithName:(id)name;	// 0x355a5591
- (BOOL)ownedOnly:(BOOL)only;	// 0x355a50cd
- (id)procInfoWithPID:(int)pid;	// 0x355a5819
- (void)removeProcInfo:(id)info;	// 0x355a4be9
// converted property setter: - (void)setAppsOnly:(BOOL)only;	// 0x355a50dd
- (void)setOwnedOnly:(BOOL)only;	// 0x355a509d
- (void)setProcInfos:(id)infos;	// 0x355a4a95
- (BOOL)update;	// 0x355a4c5d
- (BOOL)updateFromSystem;	// 0x355a5071
@end
