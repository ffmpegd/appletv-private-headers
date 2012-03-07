/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControlHeightFactory.h"
#import <NSObject.h> // Unknown library
#import "BRControlFactory.h"


@interface ATVMusicStoreControlFactory : NSObject <BRControlFactory, BRControlHeightFactory> {
@private
	BOOL _forMainMenu;	// 4 = 0x4
}
+ (void)initialize;	// 0x340d5ce1
+ (id)mainMenuFactory;	// 0x340d5e7d
+ (void)registerPopulator:(Class)populator;	// 0x340d5f65
+ (id)standardFactory;	// 0x340d5dd9
- (id)initForMainMenu:(BOOL)mainMenu;	// 0x340d5f25
- (id)_populatorForData:(id)data;	// 0x340d66cd
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x340d6121
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x340d649d
@end

