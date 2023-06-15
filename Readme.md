# Jogwheel decoder

## Pins
#
| pin |    description    |
|-----|-------------------|
|  1  | 0: right 1: left  |
|  2  |  outer wheel data |
|  3  |  outer wheel data |
|  4  |  outer wheel data |
|-----|-------------------|
|  5  |  inner wheel data |
|  6  |  inner wheel data |
|-----|-------------------|
|  7  |  unused           |
|  8  |  unused           |
|-----|-------------------|
|  9  |  ground           |



### pins 1 to 4

| 2 | 3 | 4 | Intensity |
|---|---|---|-----|
| 0 | 0 | 0 |  0  |
| 0 | 1 | 0 |  1  |
| 0 | 1 | 1 |  2  |
| 0 | 0 | 1 |  3  |
| 1 | 0 | 1 |  4  |
| 1 | 1 | 1 |  5  |
| 1 | 1 | 0 |  6  |
| 1 | 0 | 0 |  7  |

| 1 |  OUT |
|---|------|
| 0 | right|
| 1 | left |

### Pins 5 and 6

Depending on the rotating direction turns on first one and te other
