//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@protocol MapsSuggestionsMeCardObserver;

@protocol MapsSuggestionsMeCardReader <MapsSuggestionsObject>
- (void)removeMeCardObserver:(id <MapsSuggestionsMeCardObserver>)arg1;
- (void)addMeCardObserver:(id <MapsSuggestionsMeCardObserver>)arg1;
- (BOOL)readMeCardWithHandler:(void (^)(MapsSuggestionsMeCard *, NSError *))arg1;
@end

