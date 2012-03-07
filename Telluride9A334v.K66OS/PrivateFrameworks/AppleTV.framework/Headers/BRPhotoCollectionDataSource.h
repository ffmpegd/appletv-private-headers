/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRCyclerDelegate.h"
#import "BRCyclerDataSource.h"
#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class BRStreamingPhotoCollection, BRPhotoControlFactory, NSMutableArray, BRControl;

__attribute__((visibility("hidden")))
@interface BRPhotoCollectionDataSource : NSObject <BRCyclerDelegate, BRCyclerDataSource> {
@private
	BRStreamingPhotoCollection *_collection;	// 4 = 0x4
	BRPhotoControlFactory *_controlFactory;	// 8 = 0x8
	ATVMediaQueryRef _keyItemQuery;	// 12 = 0xc
	ATVMediaQueryRef _itemsQuery;	// 16 = 0x10
	NSMutableArray *_items;	// 20 = 0x14
	BRControl *_currentControl;	// 24 = 0x18
	BOOL _cyclerFocused;	// 28 = 0x1c
	BOOL _itemsQueried;	// 29 = 0x1d
}
@property(retain) id selectionHandler;	// G=0x3326ab95; S=0x3326abb5; converted property
- (id)initWithCollection:(id)collection;	// 0x3326aa49
- (ATVMediaQueryRef)_createItemsQueryForCollection:(ATVMediaCollectionRef)collection requestKeyAssetOnly:(BOOL)only;	// 0x3326af25
- (void)_itemsQueryComplete:(ATVMediaQueryRef)complete;	// 0x3326b141
- (id)cycler:(id)cycler itemAtIndex:(int)index;	// 0x3326acc1
- (void)cyclerWasFocused:(id)focused;	// 0x3326ae79
- (void)cyclerWasUnfocused:(id)unfocused;	// 0x3326af11
- (void)dealloc;	// 0x3326abd5
- (long)numberOfItemsInCycler:(id)cycler;	// 0x3326ac95
// converted property getter: - (id)selectionHandler;	// 0x3326ab95
// converted property setter: - (void)setSelectionHandler:(id)handler;	// 0x3326abb5
@end

