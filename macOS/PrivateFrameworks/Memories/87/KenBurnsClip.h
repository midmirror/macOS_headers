//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Memories/KonaClip.h>

#import "KonaClipMiroAutoEditAdditions.h"

@class KenBurnsInfo, NSString, PVEffect;

__attribute__((visibility("hidden")))
@interface KenBurnsClip : KonaClip <KonaClipMiroAutoEditAdditions>
{
    unsigned long long _animationStyle;
    BOOL _originalIsHEIF;
    PVEffect *_kbGeneratorEffect;
}

+ (id)kenBurnsClipWithAssetRepresentation:(id)arg1;
+ (id)kenBurnsClipWithMovie:(id)arg1;
+ (id)kenBurnsClipWithURL:(id)arg1;
+ (id)kenBurnsClipWithPath:(id)arg1;
@property(nonatomic) BOOL originalIsHEIF; // @synthesize originalIsHEIF=_originalIsHEIF;
@property(nonatomic) unsigned long long animationStyle; // @synthesize animationStyle=_animationStyle;
- (struct CGAffineTransform)transform:(struct CGSize)arg1 fillDest:(BOOL)arg2;
- (BOOL)isSquare;
- (BOOL)isLandscape;
- (BOOL)isPortrait;
- (double)mediaAspectRatio;
- (double)aspectRatio;
- (void)validateEffectRange:(CDStruct_e83c9415)arg1 inProject:(id)arg2;
- (void)setContentsFromPlist:(id)arg1 inProject:(id)arg2;
- (id)plistRepresentationFromProject:(id)arg1;
@property(readonly, nonatomic) PVEffect *kbEffect;
@property(readonly, nonatomic) PVEffect *kbGeneratorEffect; // @synthesize kbGeneratorEffect=_kbGeneratorEffect;
- (id)animationEffectID;
@property(retain, nonatomic) KenBurnsInfo *kbInfo;
- (BOOL)hasPhotoCharacteristic;
- (BOOL)hasVisualCharacteristic;
- (int)clipType;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)autoEditLongestDurationWithBlueprint:(id)arg1;
- (double)autoEditShortestDurationWithBlueprint:(id)arg1;
- (double)autoEditShortestIdealDurationWithBlueprint:(id)arg1;
- (double)panoDurationMultiplier;
- (BOOL)isTall;
- (BOOL)isPano;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

