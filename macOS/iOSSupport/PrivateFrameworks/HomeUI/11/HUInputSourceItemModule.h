//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUChildServiceEditorItemModule.h>

@class HFItem;

@interface HUInputSourceItemModule : HUChildServiceEditorItemModule
{
    HFItem *_chooseInputsSelectionItem;
}

+ (CDUnknownBlockType)_serviceItemComparatorForTelevisionProfile:(id)arg1;
+ (id)supportedServiceTypes;
@property(readonly, nonatomic) HFItem *chooseInputsSelectionItem; // @synthesize chooseInputsSelectionItem=_chooseInputsSelectionItem;
- (void).cxx_destruct;
- (BOOL)canToggleConfigurationStateForItem:(id)arg1;
- (id)buildSectionsWithDisplayedItems:(id)arg1;

@end

