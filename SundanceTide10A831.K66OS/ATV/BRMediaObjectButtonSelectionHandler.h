/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSelectionHandler.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface BRMediaObjectButtonSelectionHandler : XXUnknownSuperclass <BRSelectionHandler> {
	int _selectionType;	// 4 = 0x4
}
- (id)init;	// 0x35362d
- (BOOL)_handlePlaySelectionForControl:(id)control;	// 0x3536d5
- (BOOL)_handleStartDownloadSelectionForControl:(id)control;	// 0x353825
- (BOOL)handlePlayForControl:(id)control;	// 0x353681
- (BOOL)handleSelectionForControl:(id)control;	// 0x353699
- (void)setSelectionHandlerType:(int)type;	// 0x353671
@end

