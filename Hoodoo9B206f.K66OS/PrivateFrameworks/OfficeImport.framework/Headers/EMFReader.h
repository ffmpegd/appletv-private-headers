/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "MFReader.h"
#import <NSObject.h> // Unknown library

@class EMFPlayer;

__attribute__((visibility("hidden")))
@interface EMFReader : NSObject <MFReader> {
@private
	EMFPlayer *m_player;	// 4 = 0x4
}
- (id)initWithEMFPlayer:(id)emfplayer;	// 0x344d07d1
- (void)dealloc;	// 0x344d27ad
- (int)play:(id)play;	// 0x344d07fd
- (oneway void)release;	// 0x344d2781
@end
