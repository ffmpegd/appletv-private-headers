/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface BRApplianceCategory : NSObject {
@private
	NSMutableDictionary *_info;	// 4 = 0x4
}
@property(retain) id action;	// G=0x302459e1; S=0x302459b9; converted property
@property(retain) id identifier;	// G=0x30245991; S=0x30245969; converted property
@property(assign) BOOL isDefaultCategory;	// G=0x30245929; S=0x302458d5; converted property
@property(assign) BOOL isStoreCategory;	// G=0x30245a5d; S=0x30245a09; converted property
@property(assign) BOOL isStoreDependent;	// G=0x30245b85; S=0x30245b31; converted property
@property(retain) id name;	// G=0x30245819; S=0x302457f1; converted property
@property(assign) float preferredOrder;	// G=0x30245895; S=0x30245841; converted property
@property(assign) BOOL shouldDisplayOnStartup;	// G=0x30245c19; S=0x30245bc5; converted property
@property(retain) id textEntryHistoryDisplayBehaviors;	// G=0x30245da1; S=0x30245d6d; converted property
@property(retain) id textEntryHistoryDisplayClients;	// G=0x30245d45; S=0x30245d11; converted property
@property(retain) id textEntryHistoryStorageBehavior;	// G=0x30245ce9; S=0x30245cb5; converted property
@property(retain) id textEntryHistoryStorageClient;	// G=0x30245c8d; S=0x30245c59; converted property
+ (id)categoryWithName:(id)name identifier:(id)identifier preferredOrder:(float)order;	// 0x30245625
- (id)init;	// 0x302456b1
// converted property getter: - (id)action;	// 0x302459e1
- (void)dealloc;	// 0x30245715
- (id)description;	// 0x30245761
- (BOOL)followsStoreCateogry;	// 0x30245af1
// converted property getter: - (id)identifier;	// 0x30245991
// converted property getter: - (BOOL)isDefaultCategory;	// 0x30245929
// converted property getter: - (BOOL)isStoreCategory;	// 0x30245a5d
// converted property getter: - (BOOL)isStoreDependent;	// 0x30245b85
// converted property getter: - (id)name;	// 0x30245819
// converted property getter: - (float)preferredOrder;	// 0x30245895
// converted property setter: - (void)setAction:(id)action;	// 0x302459b9
- (void)setFollowsStoreCategory:(BOOL)category;	// 0x30245a9d
// converted property setter: - (void)setIdentifier:(id)identifier;	// 0x30245969
// converted property setter: - (void)setIsDefaultCategory:(BOOL)category;	// 0x302458d5
// converted property setter: - (void)setIsStoreCategory:(BOOL)category;	// 0x30245a09
// converted property setter: - (void)setIsStoreDependent:(BOOL)dependent;	// 0x30245b31
// converted property setter: - (void)setName:(id)name;	// 0x302457f1
// converted property setter: - (void)setPreferredOrder:(float)order;	// 0x30245841
// converted property setter: - (void)setShouldDisplayOnStartup:(BOOL)displayOnStartup;	// 0x30245bc5
// converted property setter: - (void)setTextEntryHistoryDisplayBehaviors:(id)behaviors;	// 0x30245d6d
// converted property setter: - (void)setTextEntryHistoryDisplayClients:(id)clients;	// 0x30245d11
// converted property setter: - (void)setTextEntryHistoryStorageBehavior:(id)behavior;	// 0x30245cb5
// converted property setter: - (void)setTextEntryHistoryStorageClient:(id)client;	// 0x30245c59
// converted property getter: - (BOOL)shouldDisplayOnStartup;	// 0x30245c19
// converted property getter: - (id)textEntryHistoryDisplayBehaviors;	// 0x30245da1
// converted property getter: - (id)textEntryHistoryDisplayClients;	// 0x30245d45
// converted property getter: - (id)textEntryHistoryStorageBehavior;	// 0x30245ce9
// converted property getter: - (id)textEntryHistoryStorageClient;	// 0x30245c8d
@end
