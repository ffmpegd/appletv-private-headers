/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class GMMModel, GMMAnnotationProperties, GMMDataProperties, GMMProjectionProperties;

@interface GMMStreetViewMetadata : PBCodable {
	GMMDataProperties *_dataProperties;	// 4 = 0x4
	GMMProjectionProperties *_projectionProperties;	// 8 = 0x8
	GMMAnnotationProperties *_annotationProperties;	// 12 = 0xc
	GMMModel *_model;	// 16 = 0x10
}
@property(retain, nonatomic) GMMAnnotationProperties *annotationProperties;	// G=0x338402d1; S=0x338402e1; @synthesize=_annotationProperties
@property(retain, nonatomic) GMMDataProperties *dataProperties;	// G=0x33840269; S=0x33840279; @synthesize=_dataProperties
@property(readonly, assign, nonatomic) BOOL hasModel;	// G=0x3383fe3d; 
@property(retain, nonatomic) GMMModel *model;	// G=0x33840305; S=0x33840315; @synthesize=_model
@property(retain, nonatomic) GMMProjectionProperties *projectionProperties;	// G=0x3384029d; S=0x338402ad; @synthesize=_projectionProperties
// declared property getter: - (id)annotationProperties;	// 0x338402d1
// declared property getter: - (id)dataProperties;	// 0x33840269
- (void)dealloc;	// 0x3383fdbd
- (id)description;	// 0x3383fe55
- (id)dictionaryRepresentation;	// 0x3383fec5
// declared property getter: - (BOOL)hasModel;	// 0x3383fe3d
// declared property getter: - (id)model;	// 0x33840305
// declared property getter: - (id)projectionProperties;	// 0x3384029d
- (BOOL)readFrom:(id)from;	// 0x3383ff9d
// declared property setter: - (void)setAnnotationProperties:(id)properties;	// 0x338402e1
// declared property setter: - (void)setDataProperties:(id)properties;	// 0x33840279
// declared property setter: - (void)setModel:(id)model;	// 0x33840315
// declared property setter: - (void)setProjectionProperties:(id)properties;	// 0x338402ad
- (void)writeTo:(id)to;	// 0x3384016d
@end
