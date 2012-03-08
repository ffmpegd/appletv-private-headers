/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControlHeightFactory.h"
#import <NSObject.h> // Unknown library
#import "BRControlFactory.h"

@class NSDateFormatter;
@protocol BRSelectionHandler;

@interface BRPhotoControlFactory : NSObject <BRControlFactory, BRControlHeightFactory> {
@private
	id<BRSelectionHandler> _selectionHandler;	// 4 = 0x4
	NSDateFormatter *_formatter;	// 8 = 0x8
	BOOL _useMinimumImages;	// 12 = 0xc
	BOOL _useLocalProviders;	// 13 = 0xd
}
@property(readonly, retain) NSDateFormatter *formatter;	// G=0x302fc44d; converted property
@property(retain) id selectionHandler;	// G=0x302fc17d; S=0x302fc18d; converted property
+ (id)mainMenuFactory;	// 0x302fbecd
+ (id)standardFactory;	// 0x302fbe81
- (id)initForMainMenu:(BOOL)mainMenu;	// 0x302fbf19
- (id)_cyclerForData:(id)data;	// 0x302fc811
- (id)_cyclerItemForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x302fcb01
- (void)_decorateControlWithPlayIcon:(id)playIcon forMediaObject:(id)mediaObject;	// 0x302fd201
- (id)_gridItemForData:(id)data;	// 0x302fc649
- (id)_menuItemForData:(id)data;	// 0x302fc4e1
- (id)_previewControlForData:(id)data;	// 0x302fd129
- (id)_shelfItemForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x302fd4c9
- (id)_subtitleForCollection:(id)collection;	// 0x302fd6c1
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x302fc015
- (void)dealloc;	// 0x302fbfb5
// converted property getter: - (id)formatter;	// 0x302fc44d
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x302fc1cd
// converted property getter: - (id)selectionHandler;	// 0x302fc17d
// converted property setter: - (void)setSelectionHandler:(id)handler;	// 0x302fc18d
- (void)setUseMinimumImages:(BOOL)images;	// 0x302fc42d
- (BOOL)useMinumumImages;	// 0x302fc43d
@end
