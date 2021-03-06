/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRControlFactory.h"
#import "BRControlHeightFactory.h"


__attribute__((visibility("hidden")))
@interface ATVMusicStoreControlFactory : XXUnknownSuperclass <BRControlFactory, BRControlHeightFactory> {
	BOOL _forMainMenu;	// 4 = 0x4
}
+ (void)initialize;	// 0x1f9141
+ (id)mainMenuFactory;	// 0x1f92ad
+ (void)registerPopulator:(Class)populator;	// 0x1f9395
+ (id)standardFactory;	// 0x1f9209
- (id)initForMainMenu:(BOOL)mainMenu;	// 0x1f9355
- (id)_populatorForData:(id)data;	// 0x1f9e59
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x1f9551
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x1f9c49
@end

