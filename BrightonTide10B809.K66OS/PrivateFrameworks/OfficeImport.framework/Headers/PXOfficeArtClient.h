/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OAXClient.h"
#import "OfficeImport-Structs.h"

@class PXPresentationState;

@interface PXOfficeArtClient : OAXClient {
	PXPresentationState *mPresentationState;	// 4 = 0x4
}
+ (int)readPlaceholderBoundsTrackFromNode:(xmlNode *)node;	// 0x3493b525
+ (int)readPlaceholderTypeFromNode:(xmlNode *)node;	// 0x3493b36d
- (id)initWithState:(id)state;	// 0x34936e55
- (void)postprocessHyperlink:(id)hyperlink relationship:(id)relationship state:(id)state;	// 0x34968351
- (id)presentationState;	// 0x34a8a255
- (void)readClientDataFromGraphicalFramePropertiesNode:(xmlNode *)graphicalFramePropertiesNode toDrawable:(id)drawable state:(id)state;	// 0x3495f749
- (void)readClientDataFromPictureNode:(xmlNode *)pictureNode toImage:(id)image state:(id)state;	// 0x3493e5d9
- (void)readClientDataFromShapeNode:(xmlNode *)shapeNode toShape:(id)shape state:(id)state;	// 0x3493b159
- (id)readClientTextField:(xmlNode *)field paragraph:(id)paragraph state:(id)state;	// 0x3493b6cd
- (id)readOle:(xmlNode *)ole state:(id)state;	// 0x3495e72d
@end

