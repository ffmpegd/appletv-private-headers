/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDBGAbstractSlide.h"

@class GQDBGMasterSlide, GQDWPLayoutFrame;

@interface GQDBGSlide : GQDBGAbstractSlide {
	GQDBGMasterSlide *mMaster;	// 40 = 0x28
	GQDWPLayoutFrame *mNoteFrame;	// 44 = 0x2c
}
- (id)init;	// 0x35808f5d
- (void)dealloc;	// 0x35808f9d
- (id)master;	// 0x35809001
- (id)noteFrame;	// 0x35809011
@end
