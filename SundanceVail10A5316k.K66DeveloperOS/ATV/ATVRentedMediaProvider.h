/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControlFactory.h"
#import "BRSelectionHandler.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "BRProvider.h"

@class NSMutableArray, ATVDataType, ATVDataQuery;

__attribute__((visibility("hidden")))
@interface ATVRentedMediaProvider : XXUnknownSuperclass <BRProvider, BRSelectionHandler, BRControlFactory> {
	ATVDataType *_mediaType;	// 4 = 0x4
	ATVDataQuery *_dataQuery;	// 8 = 0x8
	NSMutableArray *_rentedMovies;	// 12 = 0xc
}
+ (id)providerWithMediaType:(id)mediaType;	// 0x1df759
- (id)init;	// 0x1df7a5
- (id)initWithMediaType:(id)mediaType;	// 0x1df7c5
- (void)_accountLoggedOut:(id)anOut;	// 0x1dff99
- (void)_reloadRentals;	// 0x1dfbb9
- (void)_rentalQueryComplete;	// 0x1dfe81
- (id)controlFactory;	// 0x1dfa71
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x1dfa75
- (id)dataAtIndex:(long)index;	// 0x1dfa31
- (long)dataCount;	// 0x1dfa51
- (void)dealloc;	// 0x1df925
- (BOOL)handleSelectionForControl:(id)control;	// 0x1dfaf1
- (id)hashForDataAtIndex:(long)index;	// 0x1df9e9
@end

