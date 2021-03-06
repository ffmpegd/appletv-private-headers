/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControlHeightFactory.h"
#import "BRControlFactory.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVMusicStoreControlFactory : XXUnknownSuperclass <BRControlFactory, BRControlHeightFactory> {
	BOOL _forMainMenu;	// 4 = 0x4
}
+ (void)initialize;	// 0x1ebfd1
+ (id)mainMenuFactory;	// 0x1ec13d
+ (void)registerPopulator:(Class)populator;	// 0x1ec225
+ (id)standardFactory;	// 0x1ec099
- (id)initForMainMenu:(BOOL)mainMenu;	// 0x1ec1e5
- (id)_populatorForData:(id)data;	// 0x1ecce9
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x1ec3e1
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x1ecad9
@end

