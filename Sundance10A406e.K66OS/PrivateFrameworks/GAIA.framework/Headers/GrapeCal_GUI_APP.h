/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GAIA.framework/GAIA
 */

#import "iGaiaGrapeSystemUi.h"
#import "GAIA-Structs.h"
#import <SKUIApplication.h> // Unknown library

@protocol iGaiaProject;

@interface GrapeCal_GUI_APP : SKUIApplication <iGaiaGrapeSystemUi> {
	id<iGaiaProject> proj;	// 48 = 0x30
}
- (id)init;	// 0x30417aad
- (void)SetProject:(id)project;	// 0x30417b75
- (BOOL)handleEvent:(GSEventRef)event;	// 0x30417b49
- (void)quit;	// 0x30417b1d
@end
