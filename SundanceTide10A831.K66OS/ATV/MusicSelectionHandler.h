/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSelectionHandler.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ATVDataClient;

__attribute__((visibility("hidden")))
@interface MusicSelectionHandler : XXUnknownSuperclass <BRSelectionHandler> {
	ATVDataClient *dataClient;	// 4 = 0x4
	unsigned long clientType;	// 8 = 0x8
}
@property(assign, nonatomic) unsigned long clientType;	// G=0x1ce821; S=0x1ce831; @synthesize
@property(retain, nonatomic) ATVDataClient *dataClient;	// G=0x1ce801; S=0x1ce811; @synthesize
// declared property getter: - (unsigned long)clientType;	// 0x1ce821
// declared property getter: - (id)dataClient;	// 0x1ce801
- (void)dealloc;	// 0x1ce7bd
- (BOOL)handleSelectionForControl:(id)control;	// 0x1ce421
// declared property setter: - (void)setClientType:(unsigned long)type;	// 0x1ce831
// declared property setter: - (void)setDataClient:(id)client;	// 0x1ce811
@end

