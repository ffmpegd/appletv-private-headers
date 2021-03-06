/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRControlFactory.h"
#import "BRControlHeightFactory.h"

@class NSDateFormatter;
@protocol BRSelectionHandler;

@interface BRPhotoControlFactory : NSObject <BRControlFactory, BRControlHeightFactory> {
@private
	id<BRSelectionHandler> _selectionHandler;	// 4 = 0x4
	NSDateFormatter *_formatter;	// 8 = 0x8
	BOOL _useMinimumImages;	// 12 = 0xc
	BOOL _useLocalProviders;	// 13 = 0xd
}
@property(readonly, retain) NSDateFormatter *formatter;	// G=0x33af09d1; converted property
@property(retain) id selectionHandler;	// G=0x33af0701; S=0x33af0711; converted property
+ (id)mainMenuFactory;	// 0x33af044d
+ (id)standardFactory;	// 0x33af0401
- (id)initForMainMenu:(BOOL)mainMenu;	// 0x33af0499
- (id)_cyclerForData:(id)data;	// 0x33af0d95
- (id)_cyclerItemForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x33af1085
- (void)_decorateControlWithPlayIcon:(id)playIcon forMediaObject:(id)mediaObject;	// 0x33af1785
- (id)_gridItemForData:(id)data;	// 0x33af0bcd
- (id)_menuItemForData:(id)data;	// 0x33af0a65
- (id)_previewControlForData:(id)data;	// 0x33af16ad
- (id)_shelfItemForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x33af1a4d
- (id)_subtitleForCollection:(id)collection;	// 0x33af1c45
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x33af0595
- (void)dealloc;	// 0x33af0535
// converted property getter: - (id)formatter;	// 0x33af09d1
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x33af0751
// converted property getter: - (id)selectionHandler;	// 0x33af0701
// converted property setter: - (void)setSelectionHandler:(id)handler;	// 0x33af0711
- (void)setUseMinimumImages:(BOOL)images;	// 0x33af09b1
- (BOOL)useMinumumImages;	// 0x33af09c1
@end

