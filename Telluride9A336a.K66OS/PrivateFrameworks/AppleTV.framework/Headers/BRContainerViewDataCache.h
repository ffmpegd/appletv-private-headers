/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRContainerViewDataCache : NSObject {
@private
	NSArray *_sectionInfos;	// 4 = 0x4
	long _numberOfItems;	// 8 = 0x8
	long _numberOfColumns;	// 12 = 0xc
}
@property(assign) long numberOfColumns;	// G=0x33b132a5; S=0x33b132b5; @synthesize=_numberOfColumns
@property(assign) long numberOfItems;	// G=0x33b13285; S=0x33b13295; @synthesize=_numberOfItems
@property(retain) NSArray *sectionInfos;	// G=0x33b1324d; S=0x33b13261; @synthesize=_sectionInfos
- (void)dealloc;	// 0x33b13201
// declared property getter: - (long)numberOfColumns;	// 0x33b132a5
// declared property getter: - (long)numberOfItems;	// 0x33b13285
// declared property getter: - (id)sectionInfos;	// 0x33b1324d
// declared property setter: - (void)setNumberOfColumns:(long)columns;	// 0x33b132b5
// declared property setter: - (void)setNumberOfItems:(long)items;	// 0x33b13295
// declared property setter: - (void)setSectionInfos:(id)infos;	// 0x33b13261
@end

