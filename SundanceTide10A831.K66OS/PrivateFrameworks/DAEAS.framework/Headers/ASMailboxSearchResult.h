/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASEmailItem.h"

@class NSArray, NSMutableArray;

@interface ASMailboxSearchResult : ASEmailItem {
	NSMutableArray *_classes;	// 164 = 0xa4
	NSMutableArray *_collectionIDs;	// 168 = 0xa8
}
@property(retain) NSArray *classes;	// G=0x36e275f9; S=0x36e2760d; @synthesize=_classes
@property(retain) NSArray *collectionIDs;	// G=0x36e2761d; S=0x36e27631; @synthesize=_collectionIDs
+ (BOOL)acceptsTopLevelLeaves;	// 0x36e26c29
+ (id)asParseRules;	// 0x36e26ecd
+ (BOOL)frontingBasicTypes;	// 0x36e26d25
+ (BOOL)notifyOfUnknownTokens;	// 0x36e26d79
+ (BOOL)parsingLeafNode;	// 0x36e26c7d
+ (BOOL)parsingWithSubItems;	// 0x36e26cd1
- (id)init;	// 0x36e26e25
- (BOOL)_isSearchResult;	// 0x36e26ec9
- (void)addClass:(id)aClass;	// 0x36e27521
- (void)addCollectionID:(id)anId;	// 0x36e2758d
// declared property getter: - (id)classes;	// 0x36e275f9
// declared property getter: - (id)collectionIDs;	// 0x36e2761d
- (void)dealloc;	// 0x36e26e65
- (id)description;	// 0x36e26dcd
// declared property setter: - (void)setClasses:(id)classes;	// 0x36e2760d
// declared property setter: - (void)setCollectionIDs:(id)ids;	// 0x36e27631
@end
